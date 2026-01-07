/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/07 14:25:56 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Simon;
	Bureaucrat Low;
	try
	{
		Bureaucrat Penelope("Penelope", -150);
	}
	catch(const Bureaucrat::GradeTooHighException)
	{
		std::cout << "Grade too high" << std::endl;
	}
	try
	{
		Low.decrement_grade();	
	}
	catch(const Bureaucrat::GradeTooHighException)
	{
		std::cout << "Grade too high!" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "An exception happened!" << std::endl;
	}
	std::cout << Simon << std::endl;
	std::cout << Low << std::endl;
}