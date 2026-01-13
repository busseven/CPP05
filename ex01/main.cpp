/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:33:29 by busseven          #+#    #+#             */
/*   Updated: 2026/01/13 15:46:03 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Simon("Simon", 50);
	Form		Myform("myform", 20, 10);
	Bureaucrat Penelope("Penny", 3);
	Penelope.increment_grade();

	Simon.signForm(Myform);
	std::cout << Myform;
	Penelope.signForm(Myform);
	std::cout << Myform;
}