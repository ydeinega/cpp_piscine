/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 21:41:40 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 21:41:44 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int		main(void)
{
	Contact phonebook[8];
	int		contact_num;
	std::string	command;

	contact_num = 0;
	std::cout << "Type a command (ADD, SEARCH, EXIT)" << std::endl;
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			add_new_contact(&contact_num, phonebook);
		else if (command == "SEARCH")
			make_search(contact_num, phonebook);
		else
			std::cout << "Only commands ADD, SEARCH and EXIT are accepted" << std::endl;
	}
	return (0);
}
