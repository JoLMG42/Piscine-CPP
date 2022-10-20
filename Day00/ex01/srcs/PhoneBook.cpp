/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:59:59 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/21 14:47:07 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void):index(0), old(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}	

void	PhoneBook::search(void)
{
	std::string str;

	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (11);
	std::cout << "|";
	int i = -1;
	while (++i < 3)
	{
		std::cout << std::setfill ('-') << std::setw (11);
		std::cout << "|";
	}
	std::cout << std::endl;
	for (int i = 0; i < this->index; i++)
	{
		std::cout << "|" << std::setfill (' ') << std::setw (11);
	        std::cout << std::setfill (' ') << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setfill ('-') << std::setw (11);
		(contacts[i]).print_contact();
		std::cout << std::endl;
	}
	std::cout << "|";
	std::cout << std::setfill ('-') << std::setw (11);
	std::cout << "|";
	i = -1;
	while (++i < 3)
	{
		std::cout << std::setfill ('-') << std::setw (11);
		std::cout << "|";
	}
	std::cout << std::endl << "For details, choose an index" << std::endl;
	std::getline(std::cin, str);
	if (str[0] - 48 >= 0 && str[0] - 48 <= 9 && str.length() == 1)
		(contacts[str[0] - 48]).spe_contact();
	else
		std::cout << "Bad index return to menu" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	(contacts[this->old]).add_new();
	if (this->index < 8)
		this->index++;
	this->old = (this->old + 1) % 8;
}
