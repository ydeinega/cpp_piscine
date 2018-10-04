/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:55:19 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 19:55:21 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <locale> 

void		write_to_file(std::string content, char *name)
{
	std::string file_name;
	std::locale loc;

	file_name = name;
	for (std::string::size_type i = 0; i < file_name.size(); i++)
		file_name[i] = toupper(file_name[i], loc);
	file_name += ".replace";

	std::cout << file_name <<std::endl;

	std::ofstream file(file_name);
	if (!file.is_open())
	{
		std::cout << "The file to write output could not be opened" << std::endl;
		exit (0);
	}	
	file << content;
}

std::string	sed_file(std::ifstream & file, std::string s1, std::string s2)
{
	std::stringstream	ss;
	std::size_t			found;
	std::string			content;
	bool				flag;

	ss << file.rdbuf();
	content = ss.str();
	flag = 0;
	while ((found = content.find(s1)) != std::string::npos)
	{
		content.replace(found, s1.size(), s2);
		flag = 1;
	}
	if (!flag)
	{
		std::cout << "String1 not found in the file" << std::endl;
		exit (0);
	}
	return (content);
}

int			main(int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::string content;

	if (argc == 4)
	{
		std::ifstream file(argv[1]);
		s1 = argv[2];
		s2 = argv[3];
		if (!file.is_open())
		{
			std::cout << "The file could not be opened" << std::endl;
			exit (0);
		}
		if (file.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "The file is empty" << std::endl;
			exit (0);
		}
		if (s1.empty() || s2.empty())
		{
			std::cout << "One of the strings or both strings are empty" << std::endl;
			exit (0);
		}
		content = sed_file(file, s1, s2);
		write_to_file(content, argv[1]);
	}
	else
		std::cout << "Usage:./program filename string1 string2" << std::endl;
}
