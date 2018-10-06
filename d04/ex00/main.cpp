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

#include "FlagTrap.hpp"

int		main(void)
{
	FlagTrap test1("ROSS");
	FlagTrap test2;
	FlagTrap test3(test1);

	test2 = test1;

/*
**
** CONSTRUCTORS & OPERATOR= CHECK
**
*/

	std::cout << "FR4G-TP " << test1.getName() << created << std::endl;
	std::cout << "FR4G-TP " << test2.getName() << created << std::endl;
	std::cout << "FR4G-TP " << test3.getName() << created << std::endl;

	test2.setName("CHANDLER");
	test3.setName("JOEY");

/*
**
** DAMAGE & REPAIR CHECK
**
*/
	test1.takeDamage(0);
	test1.takeDamage(0);
	test1.takeDamage(0);

}
