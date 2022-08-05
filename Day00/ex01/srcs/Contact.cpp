/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:17:30 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/05 14:52:33 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::print_contact(void)
{
	std::string cpy = this->firstname;
	std::cout << std::setfill (' ') << std::setw(10);
	if (this->firstname.length() > 10)
	{
		cpy.replace(9, 1, 1, '.');
		std::cout << cpy.substr(0, 10);
	}
	else
		std::cout << this->firstname;
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	cpy = this->lastname;
	if (this->lastname.length() > 10)
	{
		cpy.replace(9, 1, 1, '.');
		std::cout << cpy.substr(0, 10);
	}
	else
		std::cout << this->lastname;
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	cpy = this->nickname;
	if (this->nickname.length() > 10)
	{
		cpy.replace(9, 1, 1, '.');
		std::cout << cpy.substr(0, 10);
	}
	else
		std::cout << this->nickname;
	std::cout << "|";
}

void	Contact::add_new(void)
{
	if (this->firstname.length())
	{
		std::cout << "First name ?" << std::endl;
		std::getline(std::cin, this->firstname);
		if (!std::cin)
			exit(0);
	}
	else
	{
		while (!this->firstname.length())
		{
			std::cout << "First name ?" << std::endl;
			std::getline(std::cin, this->firstname);
			if (!std::cin)
				exit(0);
		}
	}
	if (this->lastname.length())
	{
		std::cout << "Last name ?" << std::endl;
		std::getline(std::cin, this->lastname);
		if (!std::cin)
			exit(0);
	}
	else
	{
		while (!this->lastname.length())
		{
			std::cout << "Last name ?" << std::endl;
			std::getline(std::cin, this->lastname);
			if (!std::cin)
				exit(0);
		}
	}
	if (this->nickname.length())
	{
		std::cout << "Nickname ?" << std::endl;
		std::getline(std::cin, this->nickname);
		if (!std::cin)
			exit(0);
	}
	else
	{
		while (!this->nickname.length())
		{
			std::cout << "Nickname ?" << std::endl;
			std::getline(std::cin, this->nickname);
			if (!std::cin)
				exit(0);
		}
	}
	if (this->phonenumber.length())
	{
		std::cout << "Phone number ?" << std::endl;
		std::getline(std::cin, this->phonenumber);
		if (!std::cin)
			exit(0);
	}
	else
	{
		while (!this->phonenumber.length())
		{
			std::cout << "Phone number ?" << std::endl;
			std::getline(std::cin, this->phonenumber);
			if (!std::cin)
				exit(0);
		}
	}
	if (this->darksecret.length())
	{
		std::cout << "Dark secret ?" << std::endl;
		std::getline(std::cin, this->darksecret);
		if (!std::cin)
			exit(0);
	}
	else
	{
		while (!this->darksecret.length())
		{
			std::cout << "Dark secret ?" << std::endl;
			std::getline(std::cin, this->darksecret);
			if (!std::cin)
				exit(0);
		}
	}	
}

void	Contact::spe_contact(void)
{
	if (this->firstname.length() > 0)
	{
		std::cout << "Firstname : " << this->firstname << std::endl;
		std::cout << "Lastname : " << this->lastname << std::endl;
		std::cout << "Nickname : " << this->nickname << std::endl;
		std::cout << "Phone number : " << this->phonenumber << std::endl;
		std::cout << "Dark Secret : " << this->darksecret << std::endl;
	}
	else
		std::cout << "No contact";
}
