#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
		// Getters / Setters
		std::string		getTarget() const;
		virtual void	execute_form(Bureaucrat const & executor) const;

		// Exceptions
		class FileDescriptorException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::string _target;
		
};

#endif