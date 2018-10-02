/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:03:05 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 10:03:13 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[j] != '\0'; j++)
			{
				if (argv[j] >= 'a' && argv[j] <= 'z')
					std::cout << argv[j] - 32;
				else
					std::cout << argv[j];
			}
			std::cout << std::endl;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
