/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:20:40 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:20:42 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {

	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {

	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const {

	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

