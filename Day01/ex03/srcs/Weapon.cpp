/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:12:45 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/16 12:02:23 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(const std::string& type)
{
	_type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const	std::string& Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}
