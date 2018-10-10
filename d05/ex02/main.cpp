/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:14:41 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 22:14:44 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	PresidentialPardonForm a ("Yuliya Deinega");
	RobotomyRequestForm b ("CAT");
	RobotomyRequestForm c ("BOCAL");
	RobotomyRequestForm d ("DOG");
	RobotomyRequestForm e ("SCHOOL 42");
	ShrubberyCreationForm f("awesome_tree");


	std::cout << std::endl << "FORMS" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	std::cout << std::endl << "BUREAUCRATS" << std::endl;
	Bureaucrat bob("Bob", 90);
	Bureaucrat leo("Leo", 25);
	Bureaucrat mike("Mike", 5);
	std::cout << bob << std::endl;
	std::cout << leo << std::endl;
	std::cout << mike << std::endl;

	std::cout << std::endl << "PRESIDENTIAL PARDON" << std::endl;
	bob.signForm(a);
	mike.executeForm(a);
	leo.signForm(a);
	bob.executeForm(a);
	mike.executeForm(a);

	
	std::cout << std::endl << "ROBOTOMY REQUEST" << std::endl;
	bob.signForm(b);
	mike.executeForm(b);
	leo.signForm(b);
	bob.executeForm(b);
	mike.executeForm(b);
	leo.signForm(c);
	mike.executeForm(c);
	leo.signForm(d);
	mike.executeForm(d);
	leo.signForm(e);
	mike.executeForm(e);

	std::cout << std::endl << "SHRUBBERY CREATION" << std::endl;
	bob.signForm(f);
	mike.executeForm(f);
}
