/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:05:16 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 13:50:37 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP

#define WrongAnimal_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & cpy);
		virtual ~WrongAnimal(void);
		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif
