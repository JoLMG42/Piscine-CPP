/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:07:47 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 13:46:51 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP

#define WrongCat_HPP

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & copy);
		~WrongCat(void);
		virtual void	makeSound(void) const;
};

#endif
