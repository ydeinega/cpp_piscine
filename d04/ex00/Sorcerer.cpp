/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:19:36 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:19:38 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {

	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {

	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

void	Sorcerer::polymorph(Victim const & victim) const {

	victim.getPolymorphed();
}
