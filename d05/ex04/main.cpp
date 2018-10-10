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
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int		main(void)
{
	Intern	idiotOne;
    Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("presidential pardon", "Pigley");
	}
	catch (Some::SpecificException & e)
	{

	}
	catch (std::exception & e)
	{

	}
