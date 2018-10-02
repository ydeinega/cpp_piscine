/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 21:23:55 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 21:23:58 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "phonebook.hpp"

char	g_message[11][25] = {

	"Type First Name: ",
	"Type Last Name: ",
	"Type Nickname: ",
	"Type Login: ",
	"Type Postal Address: ",
	"Type Email Address: ",
	"Type Phone Number: ",
	"Type Birthday Date: ",
	"Type Favorite Meal: ",
	"Type Underwear Color: ",
	"Type Darkest Secret: "
};

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{

}

void	Contact::add_contact(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << g_message[i];
		std::getline(std::cin, this->info[i]);
	}
}

void	Contact::get_contact_info (void) const
{
	for (int j = 0; j < 11; j++)
		std::cout << info[j] << std::endl;
}

int		Contact::get_index (void) const
{
	return (this->index);
}

void	Contact::set_index(int index)
{
	this->index = index;
}