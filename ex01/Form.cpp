#include "Form.hpp"
# include "Bureaucrat.hpp"

// Constructors
Form::Form(): _name("default"), _signed(false), _signgrade(150), _execgrade(150)
{
	_signed = false;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy): _name(copy.get_name()), _signed(copy.get_signed()), _signgrade(copy.get_signgrade()), _execgrade(copy.get_execgrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name, const int signgrade, const int execgrade): _name(name), _signed(false), _signgrade(signgrade), _execgrade(execgrade)
{
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
	if(_signgrade < 1 || _execgrade < 1)
		throw Form::GradeTooHighException();
	else if(_signgrade > 150 || _execgrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}

// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	_signed = assign.get_signed();
	return *this;
}

// Getters / Setters
const std::string Form::get_name() const
{
	return _name;
}
bool Form::get_signed() const
{
	return _signed;
}
const int Form::get_signgrade() const
{
	return _signgrade;
}
const int Form::get_execgrade() const
{
	return _execgrade;
}

void	Form::beSigned(Bureaucrat &signer)
{
	if(signer.get_grade() > _signgrade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

// Exceptions
const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}
const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << "Form " << object.get_name() << ", singed: " << object.get_signed() << ", sign grade: " << object.get_signgrade() << ", execute grade: " << object.get_execgrade() << "" << std::endl;
	return stream;
}
