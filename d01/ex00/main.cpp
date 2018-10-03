/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:07:11 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 21:07:14 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *mylittlepony = new Pony("Fluttershy", true);
	mylittlepony->sings("I wanna be loved by you!");
	delete mylittlepony;
}

void	ponyOnTheStack(void)
{
	Pony mylittlepony("Pinkie Pie", false);
	mylittlepony.sings("Just you and nobody else but YOU!");
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
