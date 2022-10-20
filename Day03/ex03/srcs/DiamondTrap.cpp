/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:19:11 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 14:57:10 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap("_clap_" + name), FragTrap("_clap_" + name), ScavTrap("_clap_" + name)
{
	std::cout << "Diamond constructor called" << std::endl;
	_name = name;
	_hitPoint = 100 ;
	_attackDamage = 30;
	return ;
}

DiamondTrap::DiamondTrap(FragTrap const & cpy)
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << _name << " and my parent is " << this->FragTrap::get_name() << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & egal)
{
	this->_name = egal.get_name();
	this->_energyPoint = egal.get_energypts();
	this->_attackDamage = egal.get_attackdmg();
	this->_hitPoint = egal.get_hitpts();
	return *this;
}
