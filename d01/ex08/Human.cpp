/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:44:05 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 21:44:07 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {

	std::cout << "MELEE ATTACK on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {

	std::cout << "RANGE ATTACK on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {

	std::cout << "INTIMIDATING SHOUT on " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target) {

	void (Human::*funcptr[3])(std::string const & target) =
	{
		&Human::meleeAttack, 
		&Human::rangedAttack,
		&Human::Human::intimidatingShout
	};

	std::string func_name[3] = 
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == func_name[i])
			(this->*funcptr[i])(target);
	}
}
