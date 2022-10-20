/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:41:35 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 16:11:33 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat test("Kami", 20);
	test.setGrade(test.getGrade() - 1);
	Bureaucrat test2(test);
	test.setGrade(test.getGrade() - 5);
	std::cout << test2;
}
