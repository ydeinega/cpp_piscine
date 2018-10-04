/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:50:12 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:50:14 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*pbrain = &brain;
	std::string	&lbrain = brain;

	std::cout 	<< "*** Displaying a string using a POINTER ***"
				<< std::endl
				<< *pbrain
				<< std::endl
				<< std::endl
				<< "*** Displaying a string using a REFERENCE ***"
				<< std::endl
				<< lbrain
				<< std::endl
				<< std::endl;
}
