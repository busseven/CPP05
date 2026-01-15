/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:37:26 by busseven          #+#    #+#             */
/*   Updated: 2026/01/15 19:37:27 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	int i;

	i = 0;
	std::string formtypes[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	while(i < 3 && formtypes[i] != name)
		i++;
	switch(i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new ShrubberyCreationForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			std::cout << name << ": Form type doesn't exist." << std::endl;
			return (NULL);
	}
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

