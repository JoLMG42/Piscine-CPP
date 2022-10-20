/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:54:28 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/07 13:07:23 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Frag constructor called" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Fragp copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives asked by " << _name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & egal)
{
	this->_name = egal.get_name();
	this->_energyPoint = egal.get_energypts();
	this->_attackDamage = egal.get_attackdmg();
	this->_hitPoint = egal.get_hitpts();
	return *this;
}
