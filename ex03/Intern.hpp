#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		
		// Destructor
		~Intern();
		
		// Operators
		Intern & operator=(const Intern &assign);

		AForm *makeForm(std::string name, std::string target);
};

#endif