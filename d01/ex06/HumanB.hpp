/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:37:53 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:37:54 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanB {

public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon & type);
	void	attack(void) const;

private:
	std::string	_name;
	Weapon		*_type;
};

#endif
