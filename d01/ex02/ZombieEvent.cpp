/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 22:06:53 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 22:06:55 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::name[37] = 
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

ZombieEvent::ZombieEvent(void) {

	std::cout	<< "*** ZombieEvent created ***"
				<< std::endl;
}

ZombieEvent::~ZombieEvent(void) {

	std::cout	<< "*** ZombieEvent destroyed ***"
				<< std::endl;
}

void
ZombieEvent::setZombieType(std::string type) {

	this->_type = type;
}

Zombie*
ZombieEvent::newZombie(std::string name) const {

	Zombie	*new_zombie;

	new_zombie = new Zombie(name, this->_type);
	return (new_zombie);
}

Zombie*
ZombieEvent::randomChump(void) const {

	Zombie	*random_zombie;
	int		i;

	i = rand() % 37;
	random_zombie = newZombie(ZombieEvent::name[i]);
	random_zombie->announce();
	return (random_zombie);
}
