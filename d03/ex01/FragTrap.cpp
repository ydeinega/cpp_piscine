/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:30:53 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 15:30:55 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int	FragTrap::_maxHitPoints = 100;
unsigned int	FragTrap::_maxEnergyPoints = 100;
unsigned int	FragTrap::_meleeAttackDamage = 30;
unsigned int	FragTrap::_rangedAttackDamage = 20;
unsigned int	FragTrap::_armorDamageReduction = 5;

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

FragTrap::FragTrap(void) : _HitPoints(100), _EnergyPoints(100), _level(1) {

	std::cout << "Default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : _HitPoints(100), _EnergyPoints(100), _level(1), _name(name) {

	std::cout << "Name constructor is called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {

	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {

	std::cout << "Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {

	_HitPoints = src.getHitPoints();
	_EnergyPoints = src.getEnergyPoints();
	_level = src.getLevel();
	_name = src.getName();

	return (*this);
}

/*
**
** ATTACKS
**
*/

void		FragTrap::rangedAttack(std::string const & target) const {

	std::cout	<< "FR4G-TP " << _name << " attacks " << target << " at range, causing " 
				<< _rangedAttackDamage << " points of damage" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) const {

	std::cout	<< "FR4G-TP " << _name << " attacks " << target << " with melee, causing " 
				<< _meleeAttackDamage << " points of damage" << std::endl;
}

void		FragTrap::ddosAttack(std::string const & target) const {

	std::cout	<< "FR4G-TP " << _name << " performes a DDoS attack on " << target << std::endl;
}

void		FragTrap::cyberAttack(std::string const & target) const {

	std::cout	<< "FR4G-TP " << _name << " performes a cyber attack on " << target << std::endl;
}

void		FragTrap::malwareAttack(std::string const & target) const {

	std::cout	<< "FR4G-TP " << _name << " performes a malware attack on " << target << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	void	(FragTrap::*funcptr[5])(std::string const & target) const = {

		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack,
		&FragTrap::ddosAttack,
		&FragTrap::cyberAttack,
		&FragTrap::malwareAttack
	};

	if (_EnergyPoints < 25)
		std::cout << "FR4G-TP " << _name << " ran out of energy" << std::endl;
	else
	{
		_EnergyPoints -= 25;
		(this->*funcptr[rand() % 5])(target);
		std::cout << _EnergyPoints << " energy points left" << std::endl;
	} 
}

/*
**
** DAMAGE & REPAIR
**
*/

void		FragTrap::takeDamage(unsigned int amount) {

	if (amount <= _armorDamageReduction)
	{
		std::cout << "Trying to hit me. Ha-ha! Don't feel anything" << std::endl;
		return ;
	}
	if (_HitPoints == 0)
		std::cout << "What a WASTE! FR4G-TP " << _name << " is already dead" << std::endl;
	else if (amount >= (_HitPoints + _armorDamageReduction))
	{
		_HitPoints = 0;
		std::cout	<< "Oh NO! FR4G-TP " << _name << " is dying :( "
					<< "No hit points left" << std::endl;
	}
	else
	{
		_HitPoints = _HitPoints - amount + _armorDamageReduction;
		std::cout	<< "OUCH! This was painful! " << _HitPoints << " hit points left" << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount >= _maxHitPoints)
		_HitPoints = 100;
	else
		_HitPoints += amount;

	std::cout	<< "FR4G-TP " << _name << " is repaired :) "
				<< "Hit points are now " << _HitPoints << std::endl;
}

/*
**
** GET & SET FUNCTIONS
**
*/

int			FragTrap::getHitPoints(void) const {

	return (_HitPoints);
}

int			FragTrap::getEnergyPoints(void) const {

	return (_EnergyPoints);
}

int			FragTrap::getLevel(void) const {

	return (_level);
}

std::string	FragTrap::getName(void) const {

	return (_name);
}

void		FragTrap::setName(std::string name) {

	_name = name;
}
