/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:17:47 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 11:05:11 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		AMateria* clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif
