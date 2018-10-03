/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 21:24:11 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/01 21:24:13 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <cstdlib>

class	Contact{

public :

	// Contact(void);
	// ~Contact(void);

	void	add_contact(void);
	void	get_contact_info(void) const;
	void	print_table(void) const;
	void	set_index(int index);

private :

	int			index;
	std::string info[11];
};

#endif
