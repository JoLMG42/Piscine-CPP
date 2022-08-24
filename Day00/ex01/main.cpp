/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:14:12 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 15:52:28 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PhoneBook.hpp"
#include "./includes/Contact.hpp"

int	main(void)
{
	PhoneBook	instance;
	std::string	str;

	std::cout << "Add contact: ADD; Search contact: SEARCH; EXIT to quit" << std::endl;
	for (int i = 0; i != -1; i++)
	{
		std::getline(std::cin, str);
		if (!std::cin)
			return (0);
		else if (str.compare("EXIT") == 0)
		{
			std::cout << "Bye" << std::endl;
			return (0);
		}
		else if (str.compare("ADD") == 0)
		{
			instance.add();
		}
		else if (str.compare("SEARCH") == 0)
			instance.search();
		std::cout << std::endl;
		std::cout << "Add contact: ADD; Search contact: SEARCH; EXIT to quit";
		std::cout << std::endl;
	}
	return (0);
}
