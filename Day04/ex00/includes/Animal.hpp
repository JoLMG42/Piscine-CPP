/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:05:16 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 17:51:39 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(Animal const & cpy);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif
