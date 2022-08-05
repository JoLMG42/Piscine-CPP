/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:41:14 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/05 18:49:24 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies;
	
	zombies = NULL;
	zombies = zombies->zombieHorde(10, "Ben");
	delete [] zombies;
	return (0);
}
