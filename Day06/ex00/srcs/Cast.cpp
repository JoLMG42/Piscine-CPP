/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:10:23 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/03 15:07:40 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>


Cast::Cast(const char *value)
{
	std::string	str(value);
	_value = value;
	if ((value[0] >= '0' && value[0] <= '9') || str.length() > 1)
		_nbr = std::atof(value);
	else
		_nbr = static_cast<int>(value[0]);
	return;
}

Cast::Cast(Cast const &cpy)
{
	*this = cpy;
}

Cast::~Cast(void)
{
	return ;
}

std::string	Cast::getValue(void)
{
	return (_value);
}

double		Cast::getNbr(void)
{
	return (_nbr);
}

Cast & Cast::operator=(Cast const & egal)
{
	(void)egal;
	return *this;
}

void	Cast::affInt(void)
{
	if (static_cast<double>(getNbr()) < INT_MIN || static_cast<int>(getNbr()) > INT_MAX)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(getNbr()) << std::endl;
}

void	Cast::affChar(void)
{
	if (static_cast<int>(getNbr()) <= INT_MIN || static_cast<int>(getNbr()) >= INT_MAX)
		std::cout << "Char: Impossible" << std::endl;
	else if ((static_cast<char>(getNbr()) <= CHAR_MIN || static_cast<char>(getNbr()) >= CHAR_MAX))
	{
		std::cout << "test: " << static_cast<char>(getNbr()) << std::endl;
		std::cout << "Char: Non displayable" << std::endl;
	}
	else
		std::cout << "Char: '" << static_cast<char>(getNbr()) << "'"<< std::endl;
}

void	Cast::affFloat(void)
{
	std::cout << "Float: " << std::fixed << std::setprecision(1) << getNbr() << "f" << std::endl;
}

void	Cast::affDouble(void)
{
	std::cout << "Double: " << getNbr() << std::endl;
}

