/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/15 15:21:20 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
	RobotomyRequestForm		Robotomy("Bender");
	PresidentialPardonForm	Pardon("Me");
	ShrubberyCreationForm	Shrub("filename");

	Bureaucrat Marcus("Marcus", 140);
	Bureaucrat Penny("Penny", 63);
	Bureaucrat Robert("Robert", 6);
	Bureaucrat Shaggy("Shaggy", 2);
	try
	{
		Penny.signForm(Pardon);
		Shaggy.executeForm(Pardon);
		Robert.signForm(Pardon);
		Robert.executeForm(Pardon);
		Shaggy.executeForm(Pardon);

		Penny.signForm(Robotomy);
		Marcus.executeForm(Robotomy);
		Penny.executeForm(Robotomy);
		Robert.executeForm(Robotomy);
		
		Robert.signForm(Shrub);
		Penny.executeForm(Shrub);
		Robert.executeForm(Shrub);
		Shaggy.executeForm(Shrub);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}