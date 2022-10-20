/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:17:47 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 11:05:05 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP

#define Cure_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		
		AMateria* clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif
