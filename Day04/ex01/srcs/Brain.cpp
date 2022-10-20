/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:03:02 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 13:39:58 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{	
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & cpy)
{
	*this = cpy;
	std::cout << "Brain copy constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const & egal)
{
	(void)egal;
	for (int i = 0; i <= 100; i++)
		ideas[i] = "idee";
	return *this;
}
