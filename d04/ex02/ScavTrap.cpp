/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:50:51 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 19:51:37 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

ScavTrap::ScavTrap(void) {

	std::cout << "Default constructor for ScavTrap Class is called" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_level = 1;
	_robot_model = "SC4V-TP";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "Name constructor for ScavTrap Class is called" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_level = 1;
	_robot_model = "SC4V-TP";
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	*this = src;
	std::cout << "Copy constructor for ScavTrap Class called" << std::endl;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Destructor for ScavTrap Class is called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src) {

	ClapTrap::operator=(src);
	std::cout << "Assignation operator for ScavTrap Class is called" << std::endl;
	return (*this);
}

/*
**
** ATTACKS & CHALLENGES
**
*/

void		ScavTrap::challengeNewcomer(void) {

	std::string challenge[5] = {

		"Make 42 push ups",
		"Make me some coffee",
		"Learn new algorithm everyday",
		"Post smth on Twitter",
		"Meditate for 15 minutes"
	};
	if (_EnergyPoints < 25)
		std::cout << "SC4V-TP " << _name << " doesn't have enough energy" << std::endl;
	else
	{
		_EnergyPoints -= 25;
		std::cout << "The challenge for you will be... " << challenge[rand() % 5] << std::endl;
		std::cout << _EnergyPoints << " energy points left" << std::endl;
	} 
	
}
