/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:37:26 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:37:28 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanA {

public:
	HumanA(std::string name, Weapon & type);
	~HumanA(void);
	void	attack(void) const;

private:
	std::string	_name;
	Weapon		&_type;
};

#endif
