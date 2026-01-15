#include "AForm.hpp"
# include "Bureaucrat.hpp"

// Constructors
AForm::AForm(): _name("default"), _signed(false), _signgrade(150), _execgrade(150)
{
	_signed = false;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

AForm::AForm(const AForm &copy): _name(copy.get_name()), _signed(copy.get_signed()), _signgrade(copy.get_signgrade()), _execgrade(copy.get_execgrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

AForm::AForm(const std::string name, const int signgrade, const int execgrade): _name(name), _signed(false), _signgrade(signgrade), _execgrade(execgrade)
{
	if(_signgrade < 1 || _execgrade < 1)
		throw AForm::GradeTooHighException();
	else if(_signgrade > 150 || _execgrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}

// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

// Operators
AForm & AForm::operator=(const AForm &assign)
{
	_signed = assign.get_signed();
	return *this;
}

// Getters / Setters
const std::string AForm::get_name() const
{
	return _name;
}
bool AForm::get_signed() const
{
	return _signed;
}
const int AForm::get_signgrade() const
{
	return _signgrade;
}
const int AForm::get_execgrade() const
{
	return _execgrade;
}

void	AForm::beSigned(Bureaucrat &signer)
{
	if(signer.get_grade() > _signgrade)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

// Exceptions
const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}
const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}
const char * AForm::NotSignedException::what() const throw()
{
	return "Form is not signed!";
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if(!_signed)
		throw AForm::NotSignedException();
	else if(executor.get_grade() > _execgrade)
		throw AForm::GradeTooLowException();
	else
		execute_form(executor);
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object)
{
	stream << "Form " << object.get_name() << ", singed: " << object.get_signed() << ", sign grade: " << object.get_signgrade() << ", execute grade: " << object.get_execgrade() << "" << std::endl;
	return stream;
}
