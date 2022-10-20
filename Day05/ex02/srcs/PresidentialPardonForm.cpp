/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:24:20 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 13:47:24 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
{
	*this = cpy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	_name = target;
	_gradeSigne = 25;
	_gradeExec = 5;
	_status = 0;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw	Bureaucrat::GradeTooLowException();
	else if (_status == 0)
		std::cout << "Form not signed" << std::endl;
	else
		std::cout << _name << " was pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm	& PresidentialPardonForm::operator=(PresidentialPardonForm const & egal)
{
	_name = egal.getName();
	_gradeSigne = egal.getGradeSigne();
	_gradeExec = egal.getGradeExec();
	_status = egal.getStatus();
	return *this;
}
