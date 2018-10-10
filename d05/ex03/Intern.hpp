/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:20:08 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/09 18:20:10 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {

public:
	Intern();
	~Intern();
	Intern(Intern const &);

	Intern & operator=(Intern const &);
	Form *makeForm(std::string name, std::string target);

private:
	Form *makePresidentialPardonForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makeShrubberyCreationForm(std::string target);
};

#endif
