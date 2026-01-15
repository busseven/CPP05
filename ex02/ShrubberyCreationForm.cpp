#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("default")
{

	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "\e[0;33mFields Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	_target = assign.getTarget();
	return *this;
}


// Getters / Setters
std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void	ShrubberyCreationForm::execute_form(Bureaucrat const & executor) const
{
	std::ofstream file("_shrubbery");
	if(!file)
		throw FileDescriptorException();
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠒⠉⠉⠉⢢⠤⠤⡀⢀⣀⣀⠀⡠⠖⠋⠉⠉⠒⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⢀⠎⠀⠀⠀⠙⠄⠀⠀⠀⠀⠀⠈⡇⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⠐⠠⠄⡀⠀⠀⠀⢀⠄⠈⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠹⠔⠒⠢⠇⠀⠀⠀⠀⠀⠀⠠⠤⡖⠁⠘⡄⠀⠀⠀⠀⣠⣃⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⢀⡠⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠰⡄⠀⠀⠈⠁⠀⠙⣄⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⡔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠁⠀⠀⠀⠀⠀⠀⡜⠂⠲⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⠀⠉⢢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣞⠀⠀⠘⠒⠂⡀" << std::endl;
	file << "⠀⢀⡠⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠘⠂⠈⠆⠀⠀⠀⠀⠀⠀⠈⡆⠀⠀⠀⠀⡝" << std::endl;
	file << "⢠⠋⠀⠀⠀⡠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢄⣀⣀⡠⡂⠀⠀⠀⠠⡄⠀⠀⢀⡀⠀⢀⡰⠃⠀⠀⠀⠺⣅" << std::endl;
	file << "⡇⠀⠀⠀⠀⠣⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⡄⠀⠰⣀⡠⣀⠀⢀⣠⠎⠉⣹⣀⠀⠀⠀⠀⠀⣸" << std::endl;
	file << "⡇⠀⠀⠀⠀⢰⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⢷⠒⠂⠐⡎⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠁⠀⠉⢢⠀⢰⠊⠁" << std::endl;
	file << "⠘⢤⡤⠀⠀⠀⠑⠂⠐⢆⠀⣄⣀⣀⠀⠀⡀⢀⡴⠀⠀⡧⣀⠜⠑⠂⢺⢳⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡜⠐⠃⠀⠀" << std::endl;
	file << "⠀⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢎⠀⠡⠀⠀⠱⡀⣠⠀⠀⡏⠈⢱⢲⠂⠀⠀⠀⠀⠀⠀⠀⠀⠱⠀⠀⠀⠀" << std::endl;
	file << "⠀⠱⣄⡀⣠⠃⠀⠀⠀⠀⠀⠀⠀⠉⢫⣁⢫⡳⢄⢣⠀⠀⠉⠀⠀⢰⠇⢀⠇⢾⡻⠖⢖⠁⠀⡀⡀⠀⢀⡼⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠸⡀⠀⠀⠀⠐⣄⣀⣀⡠⠎⠓⢯⡀⠀⢸⠀⠀⠀⠀⠀⣸⢁⠎⡴⡋⠀⠀⠀⡉⠉⠀⠈⡏⠁⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠉⠒⠒⠒⠋⠀⠀⠀⠀⠀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⣿⢏⡾⠝⠓⠢⠤⠊⠈⠑⠒⠊⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⡠⠄⣀⣿⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⢸⡜⣉⢿⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠸⡱⡻⡸⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡤⢄⡀⠀⢀⣀⣀⢇⠀⠀⠀⠉⠈⠀⡎⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠠⢤⡤⠀⢘⡆⠈⠋⣑⣽⣾⠌⠀⠀⠀⠀⠀⠀⠣⣸⣄⠀⢹⡅⠀⠔⠪⠿⢤⣤⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠐⠈⠉⠀⢀⣤⣖⣋⣁⣀⣋⣀⣀⠀⠒⠒⠄⠀⠀⠈⠈⠓⠦⢤⣀⠀⠀⠀⠀⠀⠑⠀⠀⠀⠀⠀⠀" << std::endl;
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠦⣄⣸⡟⠒⠒⠒⠒⠒⠚⠛⠀⠀⠀⠀⠀⢰⣶⣶⣶⣶⣶" << std::endl;
	file.close();
}

const char * ShrubberyCreationForm::FileDescriptorException::what() const throw()
{
	return "Something went wrong while creating file";
}