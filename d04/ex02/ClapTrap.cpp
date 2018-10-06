/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:07:50 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 21:07:51 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

ClapTrap::ClapTrap(void) : 
_maxHitPoints(100), _maxEnergyPoints(100), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5), _HitPoints(100),
_EnergyPoints(100), _level(1), _robot_model("CL4G-TP") {

	std::cout << "Default constructor for ClapTrap Class is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_maxHitPoints(100), _maxEnergyPoints(100), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5), _HitPoints(100),
_EnergyPoints(100), _level(1), _name(name), _robot_model("CL4G-TP") {

	std::cout << "Name constructor for ClapTrap Class is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

	*this = src;
	std::cout << "Copy constructor for ClapTrap Class is called" << std::endl;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor for ClapTrap Class is called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src) {

	_maxHitPoints = src.getMaxHitPoints();
	_maxEnergyPoints = src.getMaxEnergyPoints();
	_meleeAttackDamage = src.getMeleeAttackDamage();
	_rangedAttackDamage = src.getRangedAttackDamage();
	_armorDamageReduction = src.getArmorDamageReduction();
	_HitPoints = src.getHitPoints();
	_EnergyPoints = src.getEnergyPoints();
	_level = src.getLevel();
	_name = src.getName();
	_robot_model = src.getRobotModel();

	std::cout << "Assignation operator for ClapTrap Class called" << std::endl;
	return (*this);
}

/*
**
** ATTACKS
**
*/

void		ClapTrap::rangedAttack(std::string const & target) const {

	std::cout	<< _robot_model << " " << _name << " attacks " << target << " at range, causing " 
				<< _rangedAttackDamage << " points of damage" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) const {

	std::cout	<< _robot_model << " " <<_name << " attacks " << target << " with melee, causing " 
				<< _meleeAttackDamage << " points of damage" << std::endl;
}

/*
**
** DAMAGE & REPAIR
**
*/

void		ClapTrap::takeDamage(unsigned int amount) {

	if (amount <= _armorDamageReduction)
	{
		std::cout	<< "Trying to hit me. Ha-ha! "
					<< _robot_model << " " << _name
					<< " Didn't feel anything" << std::endl;
		return ;
	}
	if (_HitPoints == 0)
		std::cout	<< "What a WASTE! "
					<< _robot_model << " " << _name
					<< " is already dead" << std::endl;
	else if (amount >= (_HitPoints + _armorDamageReduction))
	{
		_HitPoints = 0;
		std::cout	<< "Oh NO! "
					<< _robot_model << " " << _name
					<< " is dying :( "
					<< "No hit points left" << std::endl;
	}
	else
	{
		_HitPoints = _HitPoints - amount + _armorDamageReduction;
		std::cout	<< "OUCH! This was painful! "
					<< _robot_model << " " << _name
					<< " took a damage of "
					<< amount - _armorDamageReduction
					<< " points. "
					<< _HitPoints << " hit points left" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount >= _maxHitPoints)
		_HitPoints = 100;
	else
		_HitPoints += amount;

	std::cout	<< _robot_model << " " << _name << " is repaired :) "
				<< "Hit points are now " << _HitPoints << std::endl;
}

/*
**
** GET FUNCs
**
*/

std::string		ClapTrap::getName(void) const { return (_name); }

std::string		ClapTrap::getRobotModel(void) const { return (_robot_model); }

unsigned int	ClapTrap::getMaxHitPoints(void) const { return (_maxHitPoints); }

unsigned int	ClapTrap::getMaxEnergyPoints(void) const { return (_maxEnergyPoints); }

unsigned int	ClapTrap::getMeleeAttackDamage(void) const { return (_meleeAttackDamage); }

unsigned int	ClapTrap::getRangedAttackDamage(void) const { return (_rangedAttackDamage); }

unsigned int	ClapTrap::getArmorDamageReduction(void) const { return (_armorDamageReduction); }

unsigned int	ClapTrap::getHitPoints(void) const { return (_HitPoints); }

unsigned int	ClapTrap::getEnergyPoints(void) const { return (_EnergyPoints); }

unsigned int	ClapTrap::getLevel(void) const { return (_level); }

/*
**
** SET FUNCs
**
*/

void			ClapTrap::setName(std::string name) { _name = name; }
