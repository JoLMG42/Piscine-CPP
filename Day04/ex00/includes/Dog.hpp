/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:07:47 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 17:52:17 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const & copy);
		virtual ~Dog(void);
		virtual void	makeSound(void) const; 
};

#endif
