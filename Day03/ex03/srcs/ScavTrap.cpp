/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:49 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/07 16:13:10 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Def";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Scav Constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	_name = name;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "Scav copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav destructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << _name << ": becomes in Gard keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string& target)
{
	if (_energyPoint > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		ScavTrap(target).takeDamage(_attackDamage);
		std::cout << _name << ": new energy points: " << _energyPoint << std::endl;
	}
	else
		std::cout << _name << " got 0 " << _energyPoint << std::endl;

}

ScavTrap& ScavTrap::operator=(ScavTrap const & egal)
{
	this->_name = egal.get_name();
	this->_energyPoint = egal.get_energypts();
	this->_attackDamage = egal.get_attackdmg();
	this->_hitPoint = egal.get_hitpts();
	return *this;
}
