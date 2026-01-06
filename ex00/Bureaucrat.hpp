#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string _name, int _grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		// Getters / Setters
		const std::string get_name() const;
		int get_grade() const;
		
		// Exceptions
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		const std::string _name;
		int _grade;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object);

#endif