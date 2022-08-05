/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:28:40 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/05 18:48:46 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int n, std::string name)
{
	Zombie*	horde = new Zombie[10];

	for (int i = 0; i < n; i++)
	{
		horde[i].name = name;
		horde[i].announce();
	}
	return (horde);
}

