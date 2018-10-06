/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:31:21 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 15:31:22 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap test1("ROSS");
	FragTrap test2;
	FragTrap test3(test1);

	test2 = test1;

/*
**
** CONSTRUCTORS & OPERATOR= CHECK
**
*/
	std::cout << std::endl << "CONSTRUCTORS & OPERATOR= CHECK" << std::endl;
	std::cout << "FR4G-TP " << test1.getName() << " created" << std::endl;
	std::cout << "FR4G-TP " << test2.getName() << " created" << std::endl;
	std::cout << "FR4G-TP " << test3.getName() << " created" << std::endl;
	std::cout << std::endl;

	test2.setName("CHANDLER");
	test3.setName("JOEY");

/*
**
** DAMAGE & REPAIR CHECK
**
*/
	std::cout << std::endl << "DAMAGE & REPAIR CHECK" << std::endl;
	test1.takeDamage(0);
	test2.takeDamage(5);
	test3.takeDamage(25);
	test3.takeDamage(100);

	test3.beRepaired(25);
	test3.beRepaired(150);
	std::cout << std::endl;

/*
**
** ATTACK CHECK
**
*/
	std::cout << std::endl << "ATTACK CHECK" << std::endl;
	for (int i = 0; i < 5; i++)
		test2.vaulthunter_dot_exe("SCHOOL 42");
	std::cout << std::endl;
}
