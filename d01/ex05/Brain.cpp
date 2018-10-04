/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:58:29 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:58:30 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void) {}

Brain::~Brain (void) {}

std::string
Brain::identify(void) const {

	std::stringstream	ss;

	ss << this;
	return (ss.str());
}
