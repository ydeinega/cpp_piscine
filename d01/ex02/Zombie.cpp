/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 22:06:23 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 22:06:25 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)	{

	std::cout	<< "*** ZOMBIE BORN ***"
				<< std::endl;
}

Zombie::~Zombie(void)	{

	std::cout	<< "*** ZOMBIE DIED ***"
				<< std::endl
				<< std::endl;
}

void
Zombie::announce(void) const
{
	std::cout	<< '<'
				<< _name
				<< ' '
				<< _type
				<< '>'
				<< " Braiiiiiiinnnssss..."
				<< std::endl;
}
