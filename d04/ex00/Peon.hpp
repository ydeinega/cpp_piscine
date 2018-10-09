/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:20:33 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:20:35 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class	Peon : public Victim {

public:
	Peon(void);
	Peon(std::string name);
	//Victim(Victim & src);
	~Peon(void);

	//Victim &	operator=(Victim const & src);
	virtual void	getPolymorphed(void) const;
};

#endif
