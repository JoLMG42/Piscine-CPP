/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:04:21 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/30 16:15:10 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	test("1");
	ScavTrap	test2("Scav");
	std::string	Neo = "2";
	std::string	l = "3";
	test2.attack(Neo);
	test.attack(Neo);
	test.attack(l);
	test.beRepaired(1);
	test2.guardGate();
}
