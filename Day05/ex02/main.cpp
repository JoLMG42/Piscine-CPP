/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:03:34 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 13:50:02 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a("Luna", 5);
	Bureaucrat b("Louis", 150);
	Form	*T1 = new ShrubberyCreationForm("Target1");
	Form	*T2 = new RobotomyRequestForm("Target2");
	Form	*T3 = new PresidentialPardonForm("Target3");
	a.executeForm(*T1);
	a.signForm(*T1);
	a.signForm(*T1);
	a.signForm(*T1);
	a.executeForm(*T1);
	a.executeForm(*T1);
	std::cout << a << std::endl;
	a.executeForm(*T2);
	a.signForm(*T2);
	a.signForm(*T2);
	a.signForm(*T2);
	a.executeForm(*T2);
	a.executeForm(*T2);
	std::cout << a << std::endl;
	b.executeForm(*T3);
	b.signForm(*T3);
	b.signForm(*T3);
	b.signForm(*T3);
	b.executeForm(*T3);
	b.executeForm(*T3);
	std::cout << b << std::endl;
	delete T1;
	delete T2;
	delete T3;
	return 0;
}
