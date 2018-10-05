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

int const		Fixed::_b = 8;

Fixed::Fixed(void) : _n(0) {
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _n(n << Fixed::_b) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) {

	std::cout << "Float constructor called" << std::endl;
	_n = (int)std::roundf(n * (1 << _b));
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

int				Fixed::getRawBits(void) const {

	return (_n);
}

void			Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}

int				Fixed::toInt(void) const {

	return (_n >> Fixed::_b);
}

float			Fixed::toFloat(void) const {

	float f = _n;
	return (f / (1 << _b));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {

	o << src.toFloat();
	return (o);
}
