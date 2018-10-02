/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 22:03:24 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 22:03:27 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# include "Contact.class.hpp"
# include <iostream>
# include <string>
# include <iomanip>

void	add_new_contact(int *contact_num, Contact (&phonebook)[8]);
void	make_search(int contact_num, Contact (&phonebook)[8]);
#endif
