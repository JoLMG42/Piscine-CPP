/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:22:07 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 13:28:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;	
	return ;
}

AMateria::AMateria(AMateria const & cpy)
{
	*this = cpy;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType(void) const
{
	return _type;
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
	return ;
}

AMateria& AMateria::operator=(AMateria const & egal)
{
	this->_type = egal.getType();
	return *this;
}
