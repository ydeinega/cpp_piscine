/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:36:53 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:36:55 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & type) : _name(name), _type(type) {}

HumanA::~HumanA(void) {}

void
HumanA::attack(void) const {

	std::cout << _name << " attacks with his " << _type.getType() << std::endl;
}
