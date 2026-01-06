#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{

	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
		_grade = assign.get_grade();
	return *this;
}


// Getters / Setters
const std::string Bureaucrat::get_name() const
{
	return _name;
}

int Bureaucrat::get_grade() const
{
	return _grade;
}

// Exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High!";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low!";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << "" << object.get_name() << ", bureaucrat grade " << object.get_grade() << "" << std::endl;
	return stream;
}
