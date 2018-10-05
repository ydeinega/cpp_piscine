/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:03:29 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/04 19:03:31 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	float a1 = 1.32;
	float a2 = 1.1;
	Fixed c(a1);
	Fixed d(a2);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "c + d 1.42 = " << c + d << std::endl; 
	std::cout << "a1 + a2 1.42 = " << a1 + a2 << std::endl; 
	std::cout << "c - d 1.22 = " << c - d << std::endl; 
	std::cout << "c * d 1.452 = " << c * d << std::endl;
	std::cout << "c / d 1.2 = " << c / d << std::endl;
	std::cout << "d / c 0.83 = " << d / c << std::endl;

	return 0;
}
