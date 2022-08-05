/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:40:25 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/02 12:04:34 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int	j = 1;
		while (av[j])
		{
			int	i;
			for (i = 0; av[j][i]; i++)
			{
				if (av[j][i] >= 97 && av[j][i] <= 122)
					av[j][i] = toupper(av[j][i]);
			}
			std::cout << av[j];
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}

