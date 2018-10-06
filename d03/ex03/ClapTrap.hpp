/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:08:02 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 21:08:04 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class	ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap &	operator=(ClapTrap const & src);


	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;

	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	std::string		getName(void) const;
	std::string		getRobotModel(void) const;
	unsigned int	getMaxHitPoints(void) const;
	unsigned int	getMaxEnergyPoints(void) const;
	unsigned int	getMeleeAttackDamage(void) const;
	unsigned int	getRangedAttackDamage(void) const;
	unsigned int	getArmorDamageReduction(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getLevel(void) const;

	void			setName(std::string);
	
/*
	void		setRobotModel(std::string);
	void		setMaxHitPoints(unsigned int);
	void		setMaxEnergyPoints(unsigned int);
	void		setMeleeAttackDamage(unsigned int);
	void		setRangedAttackDamage(unsigned int);
	void		setArmorDamageReduction(unsigned int);
	void		setHitPoints(unsigned int);
	void		setEnergyPoints(unsigned int);
	void		setLevel(unsigned int);
*/
protected:

	unsigned int		_maxHitPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;

	unsigned int		_HitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_level;
	std::string			_name;
	std::string			_robot_model;
};

#endif
