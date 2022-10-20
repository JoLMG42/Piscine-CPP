/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:11:05 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 16:25:06 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const  & cpy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = cpy;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

Form	*Intern::Shrubbery(std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::Presidential(std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::Robotomy(std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string nameForm, std::string target)
{
	std::string	arr[] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	Form* (Intern::*tab[3])(std::string&);

	tab[0] = &Intern::Shrubbery;
	tab[1] = &Intern::Presidential;
	tab[2] = &Intern::Robotomy;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i].compare(nameForm) == 0)
		{
			std::cout << "Intern creates " << nameForm << " for " << target << std::endl;
			return ((this->*tab[i])(target));
		}
	}
	std::cout << "Intern can't create " << nameForm << " cause doesn't exist" << std::endl;
	return NULL;
}

Intern	&	Intern::operator=(Intern const & egal)
{
	(void)egal;
	return *this;
}
