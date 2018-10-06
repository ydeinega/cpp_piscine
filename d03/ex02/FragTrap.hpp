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
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap &	operator=(FragTrap const & src);

	void		ddosAttack(std::string const & target) const;
	void		cyberAttack(std::string const & target) const;
	void		malwareAttack(std::string const & target) const;
	void		vaulthunter_dot_exe(std::string const & target);

};

#endif
