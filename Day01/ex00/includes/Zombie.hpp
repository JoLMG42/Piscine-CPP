/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:21:12 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/05 17:44:03 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	announce();
		Zombie* newZombie(std::string name);
		void	 randomChump(std::string name);
};

#endif
