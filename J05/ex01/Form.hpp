#ifndef Form_HPP
# define Form_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string 		name;
	bool				status;
	int					signreq;
	int					execreq;

public:
	Form(std::string const &name, int signreq, int execreq);
	Form(Form const &other);
	~Form();
	Form	&operator=(Form const &rhs);

	std::string const		&getName() const;
	bool 					getStatus() const;
	int						getSignReq() const;
	int 					getExecReq() const;

	void beSigned(Bureaucrat const &bureaucrat) throw(GradeTooLowException);

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

std::ostream		&operator<<(std::ostream &os, Form const &rhs);

#endif
