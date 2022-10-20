/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:22:58 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 10:50:34 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cast.hpp>

int	main(int ac, char **av)
{
	if (ac!= 2)
	{
		std::cout << "Error args" << std::endl;
		return (1);
	}
	Cast	k(av[1]);

	k.affChar();
	k.affInt();
	k.affFloat();
	k.affDouble();
}
