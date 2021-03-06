/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:58:49 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:58:51 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

Brain const &
Human::getBrain(void) const {

	return (_brain);
}

std::string
Human::identify(void) const {

	return (_brain.identify());
}
