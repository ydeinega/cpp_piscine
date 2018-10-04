/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:44:13 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 21:44:15 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	test;

	test.action("meleeAttack", "Zombie");
	test.action("rangedAttack", "Zombie");
	test.action("intimidatingShout", "Zombie");
}
