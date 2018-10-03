/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 23:12:37 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 23:12:38 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	get_index(int contact_num)
{
	int			index;
	std::string	line;

	index = 0;
	std::cout << "Type the index of the contact you are searching for: ";
	while (getline(std::cin, line))
	{
		index = std::atoi(line.c_str());
		if (index == 0 && line == "EXIT")
			exit (1);
		else if (index <= 0 || index > contact_num)
		{
			std::cout << "Wrong index. Index may be from 1 to " << contact_num << std::endl;
			std::cout << "Type the index once more or EXIT: ";
		}
		else if (index > 0 && index <= contact_num)
			return (index);
	}
	return (0);
}

void	add_new_contact(int *contact_num, Contact (&phonebook)[8])
{
	int	index;

	index = *contact_num;
	if (*contact_num + 1 > 8)
	{
		std::cout << "Too many contacts. Max number of contacts is " << MAX_CONTACTS << std::endl;
		return ;
	}
	phonebook[index].set_index(index + 1);
	phonebook[index].add_contact();
	*contact_num += 1;
}

void	make_search(int contact_num, Contact (&phonebook)[8])
{
	std::string	line;
	int			index;

	index = 0;
	if (contact_num == 0)
		std::cout << "Phonebook is empty. You may ADD a contact or EXIT" << std::endl;
	else
	{
		std::cout	<< '|' << std::setw(10) << "index" 
					<< '|' << std::setw(10) << "first name"
					<< '|' << std::setw(10) << "last name"
					<< '|' << std::setw(10) << "nickname"
					<< '|' << std::endl;
		for (int i = 0; i < contact_num; i++)
		{
			phonebook[i].print_table();
		}
		index = get_index(contact_num);
		phonebook[index - 1].get_contact_info();
	}
}
