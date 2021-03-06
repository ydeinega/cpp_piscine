/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 22:07:21 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 22:07:23 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	make_random_zombies(int n)
{
	ZombieEvent	event;
	Zombie		*random;

	event.setZombieType("Voodoo");
	for (int i = 0; i < n; i++)
	{
		random = event.randomChump();
		delete random;
	}
}

int		main(void)
{
	make_random_zombies(5);
}
