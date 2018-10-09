/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:19:23 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:19:25 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer {

public:
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	//Sorcerer(Sorcerer & src);
	~Sorcerer(void);

	//Sorcerer &	operator=(Sorcerer const & src);
	void	polymorph(Victim const & victim) const;

private:
	std::string _name;
	std::string _title;

};

//std::ostream & operator<<(std::ostream & o, Sorcerer & const src);

#endif
