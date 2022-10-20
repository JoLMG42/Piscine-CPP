/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:33:24 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/27 11:01:52 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include <iostream>
#include <stdint.h>

struct	Data
{
	std::string str;
};

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data*>(ptr);
}

int	main(void)
{
	Data		*castData;
	Data		Data;
	uintptr_t	uintptr;

	Data.str = "salut 42 comment ca va !";

	std::cout << "BEFORE" << std::endl;
	std::cout << "addr = " << &Data << std::endl;
	std::cout << "str = " << Data.str << std::endl;
	uintptr = serialize(&Data);
	castData = deserialize(uintptr);
	std::cout << "AFTER" << std::endl;
	std::cout << "addr = " << &castData << std::endl;
	std::cout << "str = " << castData->str << std::endl;
}
