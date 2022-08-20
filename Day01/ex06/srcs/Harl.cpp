/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:40:58 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/18 10:46:51 by jtaravel         ###   ########.fr       */
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

void	no_arg(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	j = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(tab[i]) == 0)
			j = i;
		switch (j)
		{
			case 0:
				Harl::debug();
				Harl::info();
				Harl::warning();
				Harl::error();
				i = 4;
				break;
			case 1:
				Harl::info();
				Harl::warning();
				Harl::error();
				i = 4;
				break;
			case 2:
				Harl::warning();
				Harl::error();
				i = 4;
				break;
			case 3:
				Harl::error();
				i = 4;
				break;
			default:
				if (i == 3)
					no_arg();
		}
	}
}
	
