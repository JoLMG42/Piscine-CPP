/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:54:53 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/27 17:27:59 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	main(void)
{
	char	str[] = "salut comment ca va !";
	iter(str, ft_strlen(str), f<char>);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	int	tab[9] = {1,2,3,4,5,9,8,7,6};
	iter(tab, 9, f<int>);
}
