/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:42:28 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:42:29 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	Form::operator=(src);
	_target = src.getTarget();
	return (*this);
}

void	PresidentialPardonForm::make_execute(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string const PresidentialPardonForm::getTarget(void) const { return(_target); }