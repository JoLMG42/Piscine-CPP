/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:41:35 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/15 15:55:49 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "--------------------" << std::endl;
	std::cout << "--- check create ---" << std::endl;
	std::cout << "--------------------\n" << std::endl;

	unsigned int var[] = {0, 1, 150, 151};
	const int num = sizeof(var) / sizeof(var[0]);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			std::cout << "(gradeToSign = " << var[i] << ", gradeToExec = " << var[j] << ")\t";
			try
			{
				Form form("InvalidForm", var[i], var[j]);
				std::cout << "Form successfully created" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << "The form has not been created. Cause: " << e.what() << std::endl;
			}
		}
	}

	std::cout << "\n------------------" << std::endl;
	std::cout << "--- check sign ---" << std::endl;
	std::cout << "------------------\n" << std::endl;

	Form *forms[] =
	{
		new Form("A11", 150, 150), new Form("B12", 130, 130),
		new Form("C13", 100, 100), new Form("D14", 50, 50),
		new Form("E15", 30, 30), new Form("F16", 1, 1),
	};

	Bureaucrat *crats[] =
	{
		new Bureaucrat("crat11", 150), new Bureaucrat("crat12", 128),
		new Bureaucrat("crat13", 98), new Bureaucrat("crat14", 50),
		new Bureaucrat("crat15", 30), new Bureaucrat("crat16", 2),
	};

	for (int i = 0; i < 6; i++)
	{
		std::cout	<< "--- Form '" << forms[i]->getName()
					<< "', signing status = '" << forms[i]->getStatus()
					<< "' --->" << std::endl;
		for (int j = 0; j < 6; j++)
			crats[j]->signForm(*forms[i]);
		std::cout	<< "---> Signing status of Form = '" << forms[i]->getStatus()
					<< "'\n" << std::endl;
	}

	for (int i = 0; i < 6; i++)
	{
		delete forms[i];
		delete crats[i];
	}
	return 0;
}
