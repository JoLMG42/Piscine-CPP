/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:20:46 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 09:34:47 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}

Dog& Dog::operator=(Dog const & egal)
{
	this->_type = egal.getType();
	return *this;
}

Brain*	Dog::getBrain(void)
{
	return _brain;
}

