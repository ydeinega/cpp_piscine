/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:01:54 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/04 18:01:56 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int const	Fixed::_b = 8;

Fixed::Fixed(void) : _n(0) {
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : _n(src.getRawBits()) {
	
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed	&	Fixed::operator=(Fixed const & src) {

	std::cout << "Assignation operator called" << std::endl;

	_n = src.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void		Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}
