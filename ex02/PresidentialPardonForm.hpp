#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
		// Getters / Setters
		std::string		getTarget() const;
		virtual void	execute_form(Bureaucrat const & executor) const;
		
	private:
		std::string _target;
};

#endif