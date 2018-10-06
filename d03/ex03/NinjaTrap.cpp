/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:06:41 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 23:06:43 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
**
** CONSTRUCTOR & DESTRUCTOR & OPERATOR=
**
*/

NinjaTrap::NinjaTrap(void) {

	std::cout << "Default constructor for NinjaTrap Class is called" << std::endl;
	_maxHitPoints = 60;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_HitPoints = 60;
	_EnergyPoints = 120;
	_level = 1;
	_robot_model = "NJ4G-TP";
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {

	std::cout << "Name constructor for NinjaTrap Class is called" << std::endl;
	_maxHitPoints = 60;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_HitPoints = 60;
	_EnergyPoints = 120;
	_level = 1;
	_robot_model = "NJ4G-TP";
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {

	*this = src;
	std::cout << "Copy constructor for NinjaTrap Class called" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {

	std::cout << "Destructor for NinjaTrap Class is called" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & src) {

	ClapTrap::operator=(src);
	std::cout << "Assignation operator for NinjaTrap Class is called" << std::endl;
	return (*this);
}

/*
**
** ATTACKS
**
*/

void	NinjaTrap::ninjaShoeBox(ClapTrap &target) {

	std::cout 	<< "Ninja "
				<< _name
				<< " thows an attack on robot "
				<< target.getRobotModel()
				<< " " << target.getName() 
				<< std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &target) {

	std::cout 	<< "Ninja "
				<< _name
				<< " thows an attack on robot "
				<< target.getRobotModel()
				<< " " << target.getName() 
				<< std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &target) {

	std::cout 	<< "Ninja "
				<< _name
				<< " thows an attack on robot "
				<< target.getRobotModel()
				<< " " << target.getName() 
				<< std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &target) {

	std::cout 	<< "Ninja "
				<< _name
				<< " thows an attack on robot "
				<< target.getRobotModel()
				<< " " << target.getName() 
				<< std::endl;
}
