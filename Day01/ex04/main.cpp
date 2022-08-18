/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:24:48 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/18 16:07:16 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	ft_replace(std::string recup, std::string find, std::string replace)
{
	std::size_t found = recup.find(find);
	while (found != std::string::npos)
	{
		recup.erase(found, find.length());
		recup.insert(found, found + replace.length());
	}
	return recup;
}
	

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else
	{
		std::string find(av[2]);
		std::string replace(av[3]);
		std::ifstream file(av[1], std::ios::in);
		if (!file)
		{
			std::cout << "File error\n";
			return (1);
		}
		std::string outfile(av[1]);
		outfile += ".replace";
		std::ofstream finalout(outfile.c_str());
		if (!finalout)
		{
			std::cout << "File error\n";
			return (1);
		}
		if (file)
		{
			std::string recup;
			std::string write;
			while (getline(file, recup))
			{
				write = ft_replace(recup, find, replace);
				finalout << write << std::endl;
			}
			file.close();
		}
	}
}

