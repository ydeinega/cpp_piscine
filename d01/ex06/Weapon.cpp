/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:36:26 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:36:28 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {}

std::string const &
Weapon::getType(void) const {

	return (_type);
}

void
Weapon::setType(std::string type) {

	_type = type;
}
