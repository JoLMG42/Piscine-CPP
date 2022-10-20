/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:09:44 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 13:47:05 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy)
{
	*this = cpy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}
