/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:51:47 by busseven          #+#    #+#             */
/*   Updated: 2026/01/15 14:51:48 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(const std::string _name, const int _signgrade, const int _execgrade);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		const std::string	get_name() const;
		bool				get_signed() const;
		const int			get_signgrade() const;
		const int			get_execgrade() const;
		
		// Exceptions
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		void	beSigned(Bureaucrat &signer);
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signgrade;
		const int			_execgrade;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif