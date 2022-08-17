/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:35:39 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/16 11:29:59 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;
	public:
		HumanB(const std::string&);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon&);
};

#endif
