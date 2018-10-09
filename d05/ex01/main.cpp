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

int		main(void)
{
	Form a ("FORM-A", 100, 150);
	Form b ("FORM-B", 0, 100);
	Form c ("FORM-B", 1, 160);

	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << std::endl;
	Bureaucrat bob("Bob", 90);
	Bureaucrat leo("Leo", 110);
	std::cout << bob << std::endl;
	std::cout << leo << std::endl;

	std::cout << std::endl;
	leo.signForm(a);
	bob.signForm(a);
}
