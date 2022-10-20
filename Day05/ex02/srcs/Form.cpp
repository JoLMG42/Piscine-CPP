/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:26:13 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 13:47:07 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
{
	_name = "form";
	_gradeSigne = 10;
	_gradeExec = 10;
	_status = 0;
	std::cout << "Form constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int gradeSigne, int gradeExec)
{
	_name = name;
	_gradeSigne = gradeSigne;
	_gradeExec = gradeExec;
}

Form::Form(Form const & cpy)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

std::string	Form::getName(void) const
{
	return _name;
}

int	Form::getGradeSigne(void) const
{
	return _gradeSigne;
}

int	Form::getGradeExec(void) const
{
	return _gradeExec;
}

int	Form::getStatus(void) const
{
	return _status;
}

void	Form::setGradeSigne(int n)
{
	_gradeSigne = n;
}

void	Form::setGradeExec(int n)
{
	_gradeExec = n;
}

void	Form::setStatus(int n)
{
	_status = n;
}

int	Form::beSigned(Bureaucrat k)
{
	if (k.getGrade() <= _gradeSigne)
		setStatus(1);
	else
		GradeTooLowException();
	return (0);
}

