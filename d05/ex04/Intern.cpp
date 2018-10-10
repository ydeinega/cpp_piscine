/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:20:20 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/09 18:20:23 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &) {}

Intern & Intern::operator=(Intern const &) { return (*this); }

Form * Intern::makeForm(std::string name, std::string target) {

	Form * (Intern::*funcptr[3])(std::string) = 
	{
		&Intern::makePresidentialPardonForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makeShrubberyCreationForm
	};

	std::string	form_name[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for(int i = 0; i < 3; i++)
	{
		if (name == form_name[i])
		{
			std::cout << "Intern creates form " << name << std::endl;
			return (this->*funcptr[i])(target);
		}
	}
	std::cout << "Form " << name << " not found" << std::endl;
	return (NULL);
}

Form * Intern::makePresidentialPardonForm(std::string target) { return (new PresidentialPardonForm(target)); }
Form * Intern::makeRobotomyRequestForm(std::string target) { return (new RobotomyRequestForm(target)); }
Form * Intern::makeShrubberyCreationForm(std::string target) { return (new ShrubberyCreationForm(target)); }