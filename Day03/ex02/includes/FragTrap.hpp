/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:21:27 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/07 13:05:05 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & cpy);
		~FragTrap(void);
		void	highFivesGuys(void);
		FragTrap& operator=(FragTrap const & egal);
};

#endif


