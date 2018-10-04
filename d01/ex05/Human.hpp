/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:59:01 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/03 16:59:03 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {

public:
					Human(void);
					~Human(void);
	Brain const &	getBrain(void) const;
	std::string		identify(void) const;

private:
	Brain const _brain;	
};

#endif
