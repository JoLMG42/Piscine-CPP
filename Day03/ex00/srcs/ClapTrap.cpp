/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:56:10 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/30 16:18:35 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_hitPoint(10), _energyPoint(10), _attackDamage(2)
{
	std::cout << "Constructor called" << std::endl;
	_name = name;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}
void	ClapTrap::attack(std::string& target)
{
	if (_energyPoint > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		ClapTrap(target).takeDamage(_attackDamage);
		std::cout << _name << ": new energy points: " << _energyPoint << std::endl;
	}
	else
		std::cout << _name << " got 0 " << _energyPoint << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint <= 0)
		std::cout << _name << " already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes " << _attackDamage << " of damage" << std::endl; 
		_hitPoint -= amount;
		std::cout << _name << ": new hit points: " << _hitPoint << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0)
		std::cout << _name << ": no energy points left" << std::endl;
	else
	{
		_hitPoint += amount;
		std::cout << "ClapTrap " << _name << " repairs iself!" << std::endl;
		_energyPoint--;
		std::cout << _name << ": new energy points: " << _energyPoint << std::endl;
	}
}

unsigned int	ClapTrap::get_hitpts(void) const
{
	return _hitPoint;
}

std::string	ClapTrap::get_name(void) const
{
	return _name;
}

unsigned int	ClapTrap::get_energypts(void) const
{
	return _energyPoint;
}

unsigned int	ClapTrap::get_attackdmg(void) const
{
	return _attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & egal)
{
	this->_name = egal.get_name();
	this->_energyPoint = egal.get_energypts();
	this->_attackDamage = egal.get_attackdmg();
	this->_hitPoint = egal.get_hitpts();
	return *this;
}

