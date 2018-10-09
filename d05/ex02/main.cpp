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

int		main(void)
{
	PresidentialPardonForm a ("Yuliya Deinega");

	std::cout << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	Bureaucrat bob("Bob", 90);
	Bureaucrat leo("Leo", 25);
	Bureaucrat mike("Mike", 5);
	std::cout << bob << std::endl;
	std::cout << leo << std::endl;
	std::cout << mike << std::endl;

	std::cout << std::endl;
	bob.signForm(a);
	mike.executeForm(a);
	leo.signForm(a);
	bob.executeForm(a);
	mike.executeForm(a);
}
