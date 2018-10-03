/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:06:42 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 21:06:45 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, bool alloc) : _pony_name(name), _alloc(alloc)
{
	std::cout	<< "Hello! My name is "
				<< _pony_name 
				<< "! And I was allocated on the "
				<< (_alloc ? "heap ;)" : "stack ;)")
				<< std::endl;
}

Pony::~Pony(void)
{
	std::cout	<< "Bye-bye! "
				<< _pony_name
				<< " will miss you :("
				<< std::endl
				<< std::endl;
}

void	Pony::sings(std::string song) const
{
	std::cout	<< "La-la-la: "
				<< song
				<< std::endl;
}
