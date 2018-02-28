#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdexcept>

class Bureaucrat
{
private:
	std::string const	name;
	int 				grade;

public:

	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();
	Bureaucrat	&operator=(Bureaucrat const &rhs);

	std::string const		&getName() const;
	int 					getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &other);
		~GradeTooHighException() throw();
		GradeTooHighException	&operator=(GradeTooHighException const &rhs);

		const char 				*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &other);
		~GradeTooLowException() throw();
		GradeTooLowException	&operator=(GradeTooLowException const &rhs);

		const char 				*what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
#endif
