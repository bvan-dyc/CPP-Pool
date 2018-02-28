#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &nname, int ngrade) : name(nname)
{
	if (ngrade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (ngrade > 150)
		throw(Bureaucrat::GradeTooLowException());
	grade = ngrade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << form.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	name = rhs.getName();
	grade = rhs.getGrade();
	return (*this);
}

std::string const	&Bureaucrat::getName() const
{
	return(name);
}

int 					Bureaucrat::getGrade() const
{
	return(grade);
}

void Bureaucrat::incrementGrade()
{
	grade--;
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrementGrade()
{
	grade++;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &other) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return(*this);
}

const char 				*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &other) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return(*this);
}

const char 				*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream		&operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (os);
}
