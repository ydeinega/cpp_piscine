/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:38:03 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:38:04 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
	Weapon        club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}
// {
// 	Weapon        club = Weapon("crude spiked club");
// 	HumanB jim("Jim");
// 	jim.setWeapon(club);
// 	jim.attack();
// 	club.setType("some other type of club");
// 	jim.attack();
// }