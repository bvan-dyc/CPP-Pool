#include "Form.hpp"

Form::Form(std::string const &nname, int nsignreq, int nexecreq) : name(nname)
{
	if (nsignreq < 1 || nexecreq < 1)
		throw(Form::GradeTooHighException());
	if (nsignreq > 150 || nexecreq > 150)
		throw(Form::GradeTooLowException());
	signreq = nsignreq;
	nexecreq = nexecreq;
	status = 0;
}

Form::Form(Form const &other)
{
	*this = other;
}

Form::~Form()
{}

Form	&Form::operator=(Form const &rhs)
{
	name = rhs.name;
	status = rhs.status;
	execreq = rhs.execreq;
	signreq = rhs.signreq;
	return (*this);
}

std::string const	&Form::getName() const
{
	return(name);
}

bool 					Form::getStatus() const
{
	return(status);
}

int 					Form::getExecReq() const
{
	return(execreq);
}

int 					Form::getSignReq() const
{
	return(signreq);
}

void 					Form::beSigned(Bureaucrat const &bureaucrat) throw(GradeTooLowException)
{
	int grade = bureaucrat.getGrade();

	if (grade > getSignReq())
		throw(Form::GradeTooLowException());
	else
		status = 1;
}

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &other) {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return(*this);
}

const char 				*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &other) {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return(*this);
}

const char 				*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream		&operator<<(std::ostream &os, Form const &rhs)
{
	os << rhs.getName() << ", status: " << rhs.getStatus() << ", Signing Requirement:" << rhs.getSignReq() << ", Execution Requirement: " << rhs.getExecReq() << std::endl;
	return (os);
}
