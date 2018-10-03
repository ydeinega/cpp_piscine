/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:57:59 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 21:58:03 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak(void)
{
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
