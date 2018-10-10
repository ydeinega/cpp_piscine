/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:42:05 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:42:07 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	Form::operator=(src);
	_target = src.getTarget();
	return (*this);
}

void	RobotomyRequestForm::make_execute(void) const
{
	system("say \"This is drilling noise\" &");
	if ((std::rand() % 2))
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Oops! " << _target << " has not been robotomized" << std::endl;
}

std::string const RobotomyRequestForm::getTarget(void) const { return(_target); }
