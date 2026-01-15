#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string _name, const int _signgrade, const int _execgrade);
		
		// Destructor
		~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);
		
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
		virtual void	execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signgrade;
		const int			_execgrade;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const AForm &object);

#endif