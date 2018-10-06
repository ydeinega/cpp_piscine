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

Fixed::Fixed(void) : _n(0) {}

Fixed::Fixed(int const n) : _n(n << Fixed::_b) {}

Fixed::Fixed(float const n) {

	_n = (int)std::roundf(n * (1 << _b));
}

Fixed::Fixed(Fixed const & src) : _n(src.getRawBits()) {}

Fixed::~Fixed(void) {}

Fixed		&Fixed::operator=(Fixed const & src) {

	_n = src.getRawBits();
	return (*this);
}

Fixed		Fixed::operator+(Fixed const & src) const {

	return (Fixed(toFloat() + src.toFloat()));
}

Fixed		Fixed::operator-(Fixed const & src) const {

	return (Fixed(toFloat() - src.toFloat()));
}

Fixed		Fixed::operator*(Fixed const & src) const {

	return (Fixed(toFloat() * src.toFloat()));
}

Fixed		Fixed::operator/(Fixed const & src) const {

	return (Fixed(toFloat() / src.toFloat()));
}

bool		Fixed::operator>(Fixed const & src) const {

	return (_n > src.getRawBits());
}

bool		Fixed::operator<(Fixed const & src) const {

	return (_n < src.getRawBits());
}

bool		Fixed::operator>=(Fixed const & src) const {

	return (_n >= src.getRawBits());
}

bool		Fixed::operator<=(Fixed const & src) const {

	return (_n <= src.getRawBits());
}

bool		Fixed::operator==(Fixed const & src) const {

	return (_n == src.getRawBits());	
}

bool		Fixed::operator!=(Fixed const & src) const {

	return (_n != src.getRawBits());
}

Fixed		&Fixed::operator++(void) {
	
	_n++;
	return (*this);
}

Fixed		Fixed::operator++(int) {

	Fixed tmp(*this);
	_n++;
	return (tmp);
}

Fixed		&Fixed::operator--(void) {

	_n--;
	return (*this);
}

Fixed		Fixed::operator--(int) {

	Fixed tmp(*this);
	_n--;
	return (tmp);
}

int			Fixed::getRawBits(void) const {

	return (_n);
}

void		Fixed::setRawBits(int const raw) {

	//std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}

int			Fixed::toInt(void) const {

	return (_n >> Fixed::_b);
}

float		Fixed::toFloat(void) const {

	float f = _n;
	return (f / (1 << _b));
}

Fixed	&	Fixed::min(Fixed & a, Fixed & b) {

	return (a < b ? a : b);
}

Fixed	&	Fixed::max(Fixed & a, Fixed & b) {

	return (a > b ? a : b);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {

	return (a < b ? a : b);
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b) {

	return (a > b ? a : b);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {

	o << src.toFloat();
	return (o);
}
