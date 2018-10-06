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
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & src);
	
	void		challengeNewcomer(void);
};

#endif
