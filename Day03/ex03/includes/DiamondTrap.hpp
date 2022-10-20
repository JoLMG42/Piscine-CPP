/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:15:17 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 14:56:43 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(FragTrap const & cpy);
		~DiamondTrap(void);
		void	whoAmI(void);
		using	FragTrap::attack;
		DiamondTrap & operator=(DiamondTrap const & egal);

};
