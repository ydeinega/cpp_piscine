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

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

FragTrap::FragTrap(void) {

	std::cout << "Default constructor for FragTrap Class is called" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_level = 1;
	_robot_model = "FR4G-TP";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "Name constructor for FragTrap Class is called" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_level = 1;
	_robot_model = "FR4G-TP";
}

FragTrap::FragTrap(FragTrap const & src) {

	*this = src;
	std::cout << "Copy constructor for FragTrap Class called" << std::endl;
}

FragTrap::~FragTrap(void) {

	std::cout << "Destructor for FragTrap Class is called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {

	ClapTrap::operator=(src);
	std::cout << "Assignation operator for FragTrap Class is called" << std::endl;
	return (*this);
}

/*
**
** ATTACKS
**
*/

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
