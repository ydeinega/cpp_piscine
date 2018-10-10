/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:41:42 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 23:41:44 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	Form::operator=(src);
	_target = src.getTarget();
	return (*this);
}

void	ShrubberyCreationForm::make_execute(void) const
{
	std::string file_name = getTarget() + "_shrubbery";
	std::ofstream file(file_name);
	if (!file.is_open())
	{
		std::cout << "File " << file_name << " cannot be opened" << std::endl;
		return ;
	}
	file	<< " _" << std::endl
			<< "| |" << std::endl
			<< "| |_ _ __ ___  ___" << std::endl
			<< "| __| '__/ _ \\/ _ \\" << std::endl
			<< "| |_| | |  __/  __/" << std::endl
			<< "\\__|_|  \\___|\\___|" << std::endl << std::endl
			<< "               ,@@@@@@@," << std::endl
			<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			<< "       |o|        | |         | |" << std::endl
			<< "       |.|        | |         | |" << std::endl
			<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl << std::endl;
}

std::string const ShrubberyCreationForm::getTarget(void) const { return(_target); }
