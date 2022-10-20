/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:20:46 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 18:10:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	return ;
}

Cat& Cat::operator=(Cat const & egal)
{
	this->_type = egal.getType();
	return *this;
}
