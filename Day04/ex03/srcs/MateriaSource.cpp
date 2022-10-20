/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:44:05 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 13:59:21 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = mat;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
			break ;
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return NULL;
}
