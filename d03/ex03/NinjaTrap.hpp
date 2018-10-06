/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:06:56 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/05 23:06:58 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	NinjaTrap &	operator=(NinjaTrap const & src);

	void	ninjaShoeBox(ClapTrap &target);
	void	ninjaShoeBox(FragTrap &target);
	void	ninjaShoeBox(ScavTrap &target);
	void	ninjaShoeBox(NinjaTrap &target);
};

#endif
