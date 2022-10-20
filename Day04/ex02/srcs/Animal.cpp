/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:09:44 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 18:09:51 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):_type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & cpy)
{
	*this = cpy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

Animal& Animal::operator=(Animal const & egal)
{
	this->_type = egal.getType();
	return *this;
}

