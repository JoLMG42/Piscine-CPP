/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:40:58 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/26 15:16:19 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{	
	std::cout << std::endl;
	std::cout << "[DEBUG]" << std::endl;
	std::cout << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << std::endl;
	std::cout << "[INFO]" << std::endl;
	std::cout << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << std::endl;
	std::cout << "[WARNING]" << std::endl;
	std::cout << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	std::cout << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*tab[4])(void);

	tab[0] = &Harl::debug;
	tab[1] = &Harl::info;
	tab[2] = &Harl::warning;
	tab[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (arr[i].compare(level) == 0)
			(this->*tab[i])();
	}
}
	
