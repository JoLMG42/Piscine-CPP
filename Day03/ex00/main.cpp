/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:04:21 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/30 13:30:28 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("1");
	std::string	Neo = "2";
	std::string	l = "3";
	test.attack(Neo);
	test.attack(l);
	test.beRepaired(1);
}
