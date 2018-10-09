/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:58:37 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 20:58:38 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** CONSTRUCTOR & DESTRUCTOR
*/

Form::~Form() {}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name),
_signed(0), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	try
	{
		if (grade_to_sign < 1 || grade_to_execute < 1)
			throw Form::GradeTooHighException;
		if (grade_to_sign > 150 || grade_to_execute > 150)
			throw GradeTooLowException;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()),
_grade_to_sign(src.getGradeToSign()), _grade_to_execute(src.getGradeToExecute())
{
	try
	{
		if (src.getGradeToSign() < 1 || src.getGradeToExecute() < 1)
			throw GradeTooHighException;
		if (src.getGradeToSign() > 150 || src.getGradeToExecute() > 150)
			throw GradeTooLowException;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

/*
** ASSIGNATION OPERATOR
*/

Form & 				Form::operator=(Form const & src)
{
	_signed = src.getSigned();
	return (*this);
}

/*
** OPERATOR <<
*/

std::ostream & 		operator<<(std::ostream & o, Form const & src)
{
	o	<< "Form " 
		<< src.getName() 
		<< (src.getSigned() ? " is signed" : " is not signed. ")
		<< "This form can be signed by a bureaucrat with grade "
		<< src.getGradeToSign()
		<< " and executed by a bureaucrat with grade "
		<< src.getGradeToExecute();
	return (o);
}

/*
** GETTERS
*/

std::string const	Form::getName() const { return (_name); }
bool				Form::getSigned() const { return (_signed); }
int					Form::getGradeToSign() const { return (_grade_to_sign); }
int					Form::getGradeToExecute() const { return (_grade_to_execute); }

/*
** beSigned
*/

void				Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _grade_to_sign)
		throw GradeTooLowException;
	else
		_signed = 1;
}

/*
**
** GradeTooHigh
**
*/

Form::GradeTooHigh::GradeTooHigh() {}

Form::GradeTooHigh::~GradeTooHigh() _NOEXCEPT {}

Form::GradeTooHigh::GradeTooHigh(GradeTooHigh const &) {}

Form::GradeTooHigh & Form::GradeTooHigh::operator=(GradeTooHigh const &) { return (*this); }

const char * Form::GradeTooHigh::what() const _NOEXCEPT {

	return ("Grade is too high");
}

/*
**
** GradeTooLow
**
*/

Form::GradeTooLow::GradeTooLow() {}

Form::GradeTooLow::~GradeTooLow() _NOEXCEPT {}

Form::GradeTooLow::GradeTooLow(GradeTooLow const &) {}

Form::GradeTooLow & Form::GradeTooLow::operator=(GradeTooLow const &) { return (*this); }

const char * Form::GradeTooLow::what() const _NOEXCEPT {

	return ("Grade is too low");
}
