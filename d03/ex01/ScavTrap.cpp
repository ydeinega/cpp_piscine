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

unsigned int	ScavTrap::_maxHitPoints = 100;
unsigned int	ScavTrap::_maxEnergyPoints = 50;
unsigned int	ScavTrap::_meleeAttackDamage = 20;
unsigned int	ScavTrap::_rangedAttackDamage = 15;
unsigned int	ScavTrap::_armorDamageReduction = 3;

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

ScavTrap::ScavTrap(void) : _HitPoints(100), _EnergyPoints(50), _level(1) {

	std::cout << "SC4V-TP is created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _HitPoints(100), _EnergyPoints(50), _level(1), _name(name) {

	std::cout << "SC4V-TP named " << _name << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	*this = src;
	std::cout << "Copy of SC4V-TP named " << _name << " is created" << std::endl;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "SC4V-TP is destroyed" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src) {

	_HitPoints = src.getHitPoints();
	_EnergyPoints = src.getEnergyPoints();
	_level = src.getLevel();
	_name = src.getName();

	return (*this);
}

/*
**
** ATTACKS & CHALLENGES
**
*/

void		ScavTrap::rangedAttack(std::string const & target) const {

	std::cout	<< "SC4V-TP " << _name << " attacks " << target << " at range, causing " 
				<< _rangedAttackDamage << " points of damage" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) const {

	std::cout	<< "SC4V-TP " << _name << " attacks " << target << " with melee, causing " 
				<< _meleeAttackDamage << " points of damage" << std::endl;
}

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

/*
**
** DAMAGE & REPAIR
**
*/

void		ScavTrap::takeDamage(unsigned int amount) {

	if (amount <= _armorDamageReduction)
	{
		std::cout << "Trying to hit me. Ha-ha! My armor protects me" << std::endl;
		return ;
	}
	if (_HitPoints == 0)
		std::cout << "Useless! SC4V-TP " << _name << " is dead" << std::endl;
	else if (amount >= (_HitPoints + _armorDamageReduction))
	{
		_HitPoints = 0;
		std::cout	<< "SC4V-TP " << _name << " is dying! So painful :( "
					<< std::endl;
	}
	else
	{
		_HitPoints = _HitPoints - amount + _armorDamageReduction;
		std::cout	<< "OUCH! This hurts! " << _HitPoints << " hit points left" << std::endl;
	}
}

void		ScavTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount >= _maxHitPoints)
		_HitPoints = 100;
	else
		_HitPoints += amount;

	std::cout	<< "SC4V-TP " << _name << " is now healthy :) "
				<< "Hit points are now " << _HitPoints << std::endl;
}

/*
**
** GET & SET FUNCTIONS
**
*/

int			ScavTrap::getHitPoints(void) const {

	return (_HitPoints);
}

int			ScavTrap::getEnergyPoints(void) const {

	return (_EnergyPoints);
}

int			ScavTrap::getLevel(void) const {

	return (_level);
}

std::string	ScavTrap::getName(void) const {

	return (_name);
}

void		ScavTrap::setName(std::string name) {

	_name = name;
}
