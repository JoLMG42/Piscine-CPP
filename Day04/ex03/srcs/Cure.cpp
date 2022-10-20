/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:30:26 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 13:58:50 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void):AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

AMateria*	Cure::clone(void) const
{
	AMateria	*tmp;

	tmp = new Cure(*this);
	return tmp;
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << " 's wounds *" << std::endl;
}
