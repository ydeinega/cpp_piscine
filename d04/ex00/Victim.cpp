/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:20:01 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:20:03 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {

	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim(void) {

	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

void	Victim::getPolymorphed(void) const {

	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}
