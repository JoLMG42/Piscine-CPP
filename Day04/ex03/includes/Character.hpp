/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:04:37 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/13 13:42:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_items[4];
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & cpy);
		~Character(void);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		Character & operator=(Character const & egal);
		
};

#endif
