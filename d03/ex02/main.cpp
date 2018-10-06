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
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap test1("ROSS");
	FragTrap test2;
	FragTrap test3(test1);

	test2 = test1;

	std::cout << std::endl;
	ScavTrap t1("RACHEL");
	ScavTrap t2;
	ScavTrap t3(t1);

	t2 = t1;

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
	std::cout << "SC4V-TP " << t1.getName() << " created" << std::endl;
	std::cout << "SC4V-TP " << t2.getName() << " created" << std::endl;
	std::cout << "SC4V-TP " << t3.getName() << " created" << std::endl;
	std::cout << std::endl;

	test2.setName("CHANDLER");
	test3.setName("JOEY");
	t2.setName("MONICA");
	t3.setName("PHOEBE");

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
	t1.takeDamage(0);
	t2.takeDamage(5);
	t3.takeDamage(25);
	t3.takeDamage(100);

	t3.beRepaired(25);
	t3.beRepaired(150);

/*
**
** ATTACK CHECK
**
*/
	std::cout << std::endl << "ATTACK CHECK" << std::endl;
	test1.meleeAttack("NORTH KOREA");
	test3.rangedAttack("NORTH KOREA");
	t1.meleeAttack("NORTH KOREA");
	t3.rangedAttack("NORTH KOREA");

	std::cout << std::endl << "RANDOM ATTACK CHECK" << std::endl;
	for (int i = 0; i < 5; i++)
		test2.vaulthunter_dot_exe("SCHOOL 42");
	

	std::cout << std::endl << "CHALLENGE CHECK" << std::endl;
	for (int i = 0; i < 3; i++)
		t2.challengeNewcomer();
	std::cout << std::endl;
}
