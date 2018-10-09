/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:42:35 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:42:36 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP
# include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const &);

	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
	void	make_execute(Bureaucrat const & executor) const;
	std::string const getTarget() const;

private:
	std::string _target;
};

#endif
