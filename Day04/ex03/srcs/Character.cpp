/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:40:18 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 14:04:35 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
	return ;
}

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
	return ;
}

Character::Character(Character const & cpy)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
	*this = cpy;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			delete _items[i];
	}
	return ;
}

std::string const & Character::getName(void) const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] == NULL)
		{
			_items[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		_items[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_items[idx] == NULL)
			return ;
		_items[idx]->use(target);
	}
	else
		return ;
}

Character & Character::operator=(Character const & egal)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i])
			delete _items[i];
	}
	for (int j = 0; j < 4; j++)
	{
		if (egal._items[j])
			_items[j] = egal._items[j]->clone();
	}
	_name = egal.getName();
	return *this;
}
