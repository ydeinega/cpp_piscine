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

void	Contact::add_contact(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << g_message[i];
		std::getline(std::cin, this->info[i]);
		if (this->info[i] == "EXIT")
			exit (1);
	}
}

void	Contact::get_contact_info (void) const
{
	for (int j = 0; j < 11; j++)
		std::cout << info[j] << std::endl;
}

void	Contact::set_index(int index)
{
	this->index = index;
}

void	Contact::print_table (void) const
{
	std::cout << '|' << std::setw(10) << this->index;
	for (int j = 0; j < 3; j++)
	{
		if (this->info[j].size() > 10)
			std::cout << '|' << this->info[j].substr(0, 9) << '.';
		else
			std::cout << '|' << std::setw(10) << this->info[j];
	}
	std::cout << '|' << std::endl;
}
