/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:41:14 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/05 18:26:02 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	zombie = NULL;
	zombie = zombie->newZombie("Luna");
	zombie->announce();
	zombie->randomChump("Marine");
	zombie->randomChump("Louis");
	delete zombie;
	return (0);
}
