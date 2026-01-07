/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/07 14:18:32 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Simon;
	Bureaucrat Low;
	try
	{
		Low.decrement_grade();	
	}
	catch(const std::exception &e)
	{
		std::cout << "Grade too low" << std::endl;
	}
	std::cout << Simon << std::endl;
	std::cout << Low << std::endl;
}