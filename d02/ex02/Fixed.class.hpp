/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:01:39 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/04 18:01:41 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class	Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &					operator=(Fixed const & src);
	Fixed					operator+(Fixed const & src) const;
	Fixed					operator-(Fixed const & src) const;
	Fixed					operator*(Fixed const & src) const;
	Fixed					operator/(Fixed const & src) const;
	bool					operator>(Fixed const & src) const;
	bool					operator<(Fixed const & src) const;
	bool					operator>=(Fixed const & src) const;
	bool					operator<=(Fixed const & src) const;
	bool					operator==(Fixed const & src) const;
	bool					operator!=(Fixed const & src) const;
	Fixed &					operator++(void);
	Fixed					operator++(int);
	Fixed &					operator--(void);
	Fixed					operator--(int);
	
	static Fixed &			min(Fixed & a, Fixed & b);
	static Fixed &			max(Fixed & a, Fixed & b);
	static Fixed const &	min(Fixed const & a, Fixed const & b);
	static Fixed const &	max(Fixed const & a, Fixed const & b);

	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;




private:
	int					_n;
	static int const	_b;

};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
