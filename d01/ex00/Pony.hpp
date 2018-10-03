/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:06:55 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 21:06:57 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class	Pony{

public:
	Pony(std::string name, bool alloc);
	~Pony(void);
	void	sings(std::string song) const;

private:
	std::string	_pony_name;
	bool		_alloc;
};

#endif
