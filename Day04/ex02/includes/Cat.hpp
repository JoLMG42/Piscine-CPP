/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:07:47 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 18:11:36 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const & copy);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;
		Cat & operator=(Cat const & egal);
		 
};

#endif
