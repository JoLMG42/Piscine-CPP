/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:24:16 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:04:46 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("Ben"), _grade(50)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (grade <= 0)
		GradeTooLowException();
	if (grade > 150)
		GradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	*this = cpy;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called for " << _name << std::endl;
	return ;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

void	Bureaucrat::setGrade(int n)
{
	if (n <= 0)
		GradeTooLowException();
	if (n > 150)
		GradeTooHighException();
	_grade = n;
	std::cout << "New grade for " << this->getName() << " is " << this->getGrade() << std::endl;
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	if (form.getStatus())
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn't sign " << form.getName() << " because " << " grade too low" << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception e)
	{
		e.what();
	}
}
		
Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & egal)
{
	_name = egal.getName();
	_grade = egal.getGrade();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & flux)
{
	o << flux.getName() << " , bureaucrat grade " << flux.getGrade() << std::endl;
	return o;
}
