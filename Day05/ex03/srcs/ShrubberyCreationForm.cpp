/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:55:02 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:03:15 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
{
	*this = cpy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	_name = target;
	_gradeSigne = 145;
	_gradeExec = 137;
	_status = 0;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return _name;
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	_name = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw	Bureaucrat::GradeTooLowException();
	else if (_status == 0)
		std::cout << "Form not signed" << std::endl;
	else
	{
		std::ofstream	file;
		std::string 	str(_name + "_shrubbery");
		file.open(str.c_str());//, O_CREAT | O_WRONLY | O_RDONLY);
		file << "des arbres ASCII à l’intérieur." << std::endl;
		file.close();
	}
}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & egal)
{
	_name = egal.getName();
	_gradeSigne = egal.getGradeSigne();
	_gradeExec = egal.getGradeExec();
	_status = egal.getStatus();
	return *this;
}
