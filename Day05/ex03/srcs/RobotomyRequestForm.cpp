/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:55:02 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:02:59 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{
	*this = cpy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	_name = target;
	_gradeSigne = 72;
	_gradeExec = 45;
	_status = 0;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return _name;
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	_name = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << "Drill sound" << std::endl;
		if (executor.getGrade() <= 22)
			std::cout << getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << "Operation fail" << std::endl;
	}
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & egal)
{
	_name = egal.getName();
	_gradeSigne = egal.getGradeSigne();
	_gradeExec = egal.getGradeExec();
	_status = egal.getStatus();
	return *this;
}
