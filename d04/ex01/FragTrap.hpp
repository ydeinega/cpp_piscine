/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:31:07 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 15:31:11 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class	FragTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap &	operator=(FragTrap const & src);

	void		rangedAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		ddosAttack(std::string const & target) const;
	void		cyberAttack(std::string const & target) const;
	void		malwareAttack(std::string const & target) const;
	void		vaulthunter_dot_exe(std::string const & target);

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
