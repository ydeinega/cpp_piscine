/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:51:54 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 19:51:56 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class	ScavTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & src);
	
	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		challengeNewcomer(void);

	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getLevel(void) const;
	std::string	getName(void) const;

	void		setName(std::string);



private:

	static unsigned int	_maxHitPoints;
	static unsigned int	_maxEnergyPoints;
	static unsigned int	_meleeAttackDamage;
	static unsigned int	_rangedAttackDamage;
	static unsigned int	_armorDamageReduction;

	unsigned int		_HitPoints;
	unsigned int		_EnergyPoints;
	unsigned int		_level;
	std::string			_name;
};

#endif
