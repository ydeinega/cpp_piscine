/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:19:49 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/06 23:19:51 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class	Victim {

public:
	Victim(void);
	Victim(std::string name);
	//Victim(Victim & src);
	~Victim(void);

	//Victim &	operator=(Victim const & src);

	virtual void	getPolymorphed(void) const;

protected:
	std::string _name;
};


#endif
