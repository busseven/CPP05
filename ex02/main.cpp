/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/15 14:46:43 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
	ShrubberyCreationForm Shrub;
	ShrubberyCreationForm Signed;
	RobotomyRequestForm Robotomy("Bender");
	Bureaucrat Penelope("Penny", 10);
	Bureaucrat Robert("Robert", 1);
	Bureaucrat Marcus("Marcus", 140);
	try
	{
		Robert.signForm(Signed);
		Signed.execute(Penelope);
		Penelope.signForm(Robotomy);
		Robotomy.execute(Penelope);
		Signed.execute(Marcus);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << Shrub;
	std::cout << Signed;
}