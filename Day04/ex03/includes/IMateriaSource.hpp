/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:41:40 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 10:49:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP

#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource(void) {};
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
