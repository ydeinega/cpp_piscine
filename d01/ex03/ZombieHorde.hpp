/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:08:57 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:08:59 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE
# define ZOMBIEHORDE
# include "Zombie.hpp"

class	ZombieHorde {

public:
			ZombieHorde(int n);
			~ZombieHorde();
	void	announce(void) const;
	
	static	std::string name[37];

private:
	Zombie	*_horde;
	int		_num;
};

#endif
