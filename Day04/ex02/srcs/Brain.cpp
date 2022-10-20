/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:03:02 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 18:04:21 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	return ;
}
