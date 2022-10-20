/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:05:16 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/12 13:45:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(Animal const & cpy);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
		virtual Brain*	getBrain(void) = 0;
		std::string	getType(void) const;	
		Animal & operator=(Animal const & egal);
};

#endif
