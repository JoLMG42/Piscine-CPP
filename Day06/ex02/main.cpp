/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:07:48 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/27 11:52:47 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <stdlib.h>

Base	*generate(void)
{
	int	random;

	random = rand() % 3 + 1;
	switch (random)
	{
		case 1:
			return (new A());
		case 2:
			return new B();
		case 3:
			return new C();
	}
	return (NULL);
}

void	identify(Base *R)
{
	std::cout << "In identify (Base *)" << std::endl;
	if (dynamic_cast<A*>(R))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(R))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(R))
		std::cout << "C" << std::endl;
}

void	identify(Base& R)
{
	std::cout << "In identify (Base &)" << std::endl;
	try
	{
		A a = dynamic_cast<A &>(R);
		std::cout << "A" << std::endl;
	}
	catch(std::exception e)
	{
		e.what();
	}
	try
	{
		B b = dynamic_cast<B &>(R);
		std::cout << "B" << std::endl;
	}
	catch(std::exception e)
	{
		e.what();
	}
	try
	{
		C c = dynamic_cast<C &>(R);
		std::cout << "C" << std::endl;
	}
	catch(std::exception e)
	{
		e.what();
	}
}

int	main(void)
{
	std::srand(time(NULL));

	Base *R = generate();
	identify(R);
	identify(*R);
}
