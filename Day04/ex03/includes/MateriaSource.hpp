/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:05:03 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 11:12:32 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_materia[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif
