/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:35:11 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 11:50:26 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	lst;
	int		occu;
	int		x = 3;
	int		y = -9;

	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(90);
	lst.push_back(-17);
	lst.push_back(187);
	lst.push_back(90000);

	try
	{
		occu = easyfind(lst, x);
		std::cout << "Occurence find: " << occu << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		occu = easyfind(lst, y);
		std::cout << "Occurence find: " << occu << std::endl;
	}
	catch (ExceptionFail e)
	{
		std::cout << e.what() << y << std::endl;
	}
	return (0);
}
