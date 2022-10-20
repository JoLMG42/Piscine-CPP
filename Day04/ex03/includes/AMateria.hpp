/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:14:49 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 13:23:24 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const & cpy);
		virtual ~AMateria(void);

		std::string const & getType(void) const;

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
		AMateria & operator=(AMateria const & egal);
};

#endif
