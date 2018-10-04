/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 22:07:10 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 22:07:13 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent {
	
public:	
						ZombieEvent(void);
						~ZombieEvent(void);
	void				setZombieType(std::string type);
	Zombie				*newZombie(std::string name) const;
	Zombie				*randomChump(void) const;

	static std::string name[37];


private:
	std::string _type;
};

#endif
