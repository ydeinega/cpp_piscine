/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:02:09 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 16:02:11 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat {

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat(std::string name, int grade);

	Bureaucrat & operator=(Bureaucrat const &);
	
	std::string const getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void setGrade(int grade);
	void signForm(Form & f);

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

private:
	std::string const	_name;
	int					_grade;
	static int const	_minGrade;
	static int const	_maxGrade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & src);

#endif
