/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:04:21 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/07 13:04:20 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	test("Clap");
	ScavTrap	test2("Scav");
	FragTrap	test3("Frag");
	std::string	Neo = "2";
	std::string	l = "3";
	std::string	frag = "frag";
	test2.attack(Neo);
	test.attack(Neo);
	test.attack(l);
	test.beRepaired(1);
	test2.guardGate();
	test3.attack(l);
	test3.highFivesGuys();
}
