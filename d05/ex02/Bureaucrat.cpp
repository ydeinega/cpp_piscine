/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:02:29 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/08 16:02:31 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int const	Bureaucrat::_minGrade = 150;
int const	Bureaucrat::_maxGrade = 1;


Bureaucrat::~Bureaucrat(void) {

	// std::cout << "Bureaucrat class destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	// std::cout << "Name and grade constructor is called" << std::endl;
	try
	{
		setGrade(grade);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade()) {

	// std::cout << "Copy constructor is called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	// std::cout << "Assignation operator is called" << std::endl;
	setGrade(src.getGrade());
	return (*this);
}

std::string const Bureaucrat::getName(void) const { return (_name); }

int Bureaucrat::getGrade(void) const { return (_grade); }

void Bureaucrat::incrementGrade(void) {

	try
	{
		setGrade(getGrade() - 1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(void) {

	try
	{
		setGrade(getGrade() + 1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::setGrade(int grade) {

	// std::cout << "Trying to set grade to " << grade << std::endl;

	if (grade < _maxGrade)
		throw GradeTooHighException;
	else if (grade > _minGrade)
		throw GradeTooLowException;
	else
		_grade = grade;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & src) {

	o << src.getName() << " bureaucrat, grade " << src.getGrade();
	return (o);
}

/*
** EXECUTE & SIGN
*/

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout	<< _name
					<< " signs "
					<< form.getName()
					<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr	<< _name
					<< " cannot sign " 
					<< form.getName() 
					<< " because " 
					<< e.what() 
					<< std::endl; 
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout	<< _name
					<< " executes "
					<< form.getName()
					<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr	<< _name
					<< " cannot execute " 
					<< form.getName()
					<< " because " 
					<< e.what() 
					<< std::endl;
	}
}

/*
**
** GradeTooHigh
**
*/

Bureaucrat::GradeTooHigh::GradeTooHigh() {}

Bureaucrat::GradeTooHigh::~GradeTooHigh() _NOEXCEPT {}

Bureaucrat::GradeTooHigh::GradeTooHigh(GradeTooHigh const &) {}

Bureaucrat::GradeTooHigh & Bureaucrat::GradeTooHigh::operator=(GradeTooHigh const &) { return (*this); }

const char * Bureaucrat::GradeTooHigh::what() const _NOEXCEPT {

	return ("Grade is too high");
}

/*
**
** GradeTooLow
**
*/

Bureaucrat::GradeTooLow::GradeTooLow() {}

Bureaucrat::GradeTooLow::~GradeTooLow() _NOEXCEPT {}

Bureaucrat::GradeTooLow::GradeTooLow(GradeTooLow const &) {}

Bureaucrat::GradeTooLow & Bureaucrat::GradeTooLow::operator=(GradeTooLow const &) { return (*this); }

const char * Bureaucrat::GradeTooLow::what() const _NOEXCEPT {

	return ("Grade is too low");
}
