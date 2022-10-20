/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:26:56 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 13:53:07 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

AMateria*	Ice::clone(void) const
{
	AMateria	*tmp;

	tmp = new Ice(*this);
	return tmp;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
