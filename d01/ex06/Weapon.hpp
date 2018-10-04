/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:36:37 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 18:36:39 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class	Weapon {

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	std::string const & getType(void) const;
	void				setType(std::string type);

private:
	std::string			_type;
};

#endif
