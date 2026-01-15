/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/15 19:16:13 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern intern;
	Bureaucrat Penny("Penny", 1);

	try
	{
		AForm *Rform = intern.makeForm("robotomy request", "Bender");
		AForm *Pform = intern.makeForm("presidential pardon", "Citizen");
		AForm *Sform = intern.makeForm("shrubbery creation", "create");

		Penny.signForm(*Rform);
		Penny.signForm(*Pform);
		Penny.signForm(*Sform);

		Penny.executeForm(*Rform);
		Penny.executeForm(*Pform);
		Penny.executeForm(*Sform);

		delete Rform;
		delete Pform;
		delete Sform;
		AForm *Nform = intern.makeForm("Non existent form", "default");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}