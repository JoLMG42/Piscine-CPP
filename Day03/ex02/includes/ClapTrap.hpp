/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:17 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/30 16:12:22 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string	_name;
		int	_hitPoint;
		int	_energyPoint;
		int	_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cpy);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & egal);
		unsigned int get_hitpts(void) const;
		unsigned int get_energypts(void) const;
		std::string get_name(void) const;
		unsigned int get_attackdmg(void) const;
		void	attack(std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
