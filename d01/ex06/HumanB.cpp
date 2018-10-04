/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:37:39 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:37:40 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void) {}

void
HumanB::attack(void) const {

	std::cout << _name << " attacks with his " << _type->getType() << std::endl;
}

void	
HumanB::setWeapon(Weapon & type) {

	_type = &type;
}
