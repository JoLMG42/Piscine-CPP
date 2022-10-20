/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:43:17 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/07 16:12:36 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & cpy);
		~ScavTrap(void);
		void	guardGate(void);
		ScavTrap& operator=(ScavTrap const &egal);
		void	attack(std::string & target);

};

#endif
