/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:20 by busseven          #+#    #+#             */
/*   Updated: 2026/01/07 14:26:47 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{

	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
		_grade = assign.get_grade();
	return *this;
}


// Getters / Setters
const std::string Bureaucrat::get_name() const
{
	return _name;
}

int Bureaucrat::get_grade() const
{
	return _grade;
}

void Bureaucrat::increment_grade()
{
	if(_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = _grade - 1;
}

void Bureaucrat::decrement_grade()
{
	if(_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = _grade + 1;
}


// Exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << "" << object.get_name() << ", bureaucrat grade " << object.get_grade() << "";
	return stream;
}
