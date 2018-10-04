/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:08:42 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:08:44 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::name[37] = 
{
		"Tyrion Lannister",
		"Cersei Lannister",
		"Daenerys Targaryen",
		"Jon Snow",
		"Sansa Stark",
		"Arya Stark",
		"Jaime Lannister",
		"Jorah Mormont",
		"Theon Greyjoy",
		"Samwell Tarly",
		"Petyr \'Littlefinger\' Baelish",
		"Lord Varys",
		"Brienne of Tarth",
		"Davos Seaworth",
		"Bran Stark",
		"Bronn",
		"Missandei",
		"Sandor \'The Hound\' Clegane",
		"Grand Maester Pycelle",
		"Eddison Tollett",
		"Podrick Payne",
		"Melisandre",
		"Tormund Giantsbane",
		"Grey Worm",
		"Tywin Lannister",
		"Margaery Tyrell",
		"Joffrey Baratheon",
		"Catelyn Stark",
		"Barristan Selmy",
		"Stannis Baratheon",
		"Gilly",
		"Hodor",
		"Grenn",
		"Robb Stark",
		"Loras Tyrell",
		"Shae",
		"Ramsay Bolton"
};

ZombieHorde::ZombieHorde(int n) : _horde(new Zombie[n]), _num(n) {

	for (int i = 0; i < _num; i++)
	{
		_horde[i].set_name(ZombieHorde::name[rand() % 37]);
		_horde[i].set_type("Voodoo");
	}
	std::cout << "HORDE CREATED" << std::endl;
}

ZombieHorde::~ZombieHorde(void) {

	delete [] _horde;
	std::cout << "HORDE DESTROYED" << std::endl;
}

void
ZombieHorde::announce(void) const
{
	for(int i = 0; i < _num; i++)
	{
		_horde[i].announce();
	}
}
