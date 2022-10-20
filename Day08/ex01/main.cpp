/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:23:46 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/03 15:02:17 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	int	len = 5;
	Span	test(len);

	test.addNumber(2147483647);
	test.addNumber(115);
	test.addNumber(17);
	test.addNumber(1);
	test.addNumber(1);
	test.addNumber(7);
	for (int i = 0; i < len; i++)
	{
		std::cout << test.getVector(i) << std::endl;
	}
	try
	{
		int a = test.longestSpan();
		std::cout << "longestSpan: " << a << std::endl;
	}
	catch (Span::ExceptionSize e)
	{
		std::cout << e.what() << std::endl;
	}
	int b = test.shortestSpan();
	std::cout << "shortestSpan: " << b << std::endl;
	return (0);
}
