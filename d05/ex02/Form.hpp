/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:58:47 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 20:58:49 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

public:
	Form();
	~Form();
	Form(Form const &);
	Form(std::string, int, int);

	Form & 				operator=(Form const &);

	std::string const	getName() const;
	bool				getSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	void				beSigned(Bureaucrat const & b);
	void				execute(Bureaucrat const & executor) const;//Non-Abstract method throwing exceptions

	class	GradeTooHigh: public std::exception {

		public:
			GradeTooHigh();
			~GradeTooHigh() _NOEXCEPT;
			GradeTooHigh(GradeTooHigh const &);

			GradeTooHigh & operator=(GradeTooHigh const &);
			virtual const char	*what() const _NOEXCEPT;
	} GradeTooHighException;

	class	GradeTooLow: public std::exception {

		public:
			GradeTooLow();
			~GradeTooLow() _NOEXCEPT;
			GradeTooLow(GradeTooLow const &);

			GradeTooLow & operator=(GradeTooLow const &);
			virtual const char	*what() const _NOEXCEPT;
	} GradeTooLowException;

	class	NotSigned: public std::exception {

		public:
			NotSigned();
			~NotSigned() _NOEXCEPT;
			NotSigned(NotSigned const &);

			NotSigned & operator=(NotSigned const &);
			virtual const char	*what() const _NOEXCEPT;
	} NotSignedException;

protected:
	virtual void	make_execute() const = 0;//Abstract

private:
	std::string const _name;
	bool _signed;
	int	const _grade_to_sign;
	int const _grade_to_execute;

};

std::ostream & operator<<(std::ostream & o, Form const &);

#endif