/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:02:42 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 12:59:31 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <vector>
#include <list>


class	ExceptionFail: public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Value doesn't exist: ");
		}
};

template <typename T>
int	easyfind(T n, int x)
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = n.end();

	for (it = n.begin(); it != ite; it++)
	{
		if (*it == x)
			return *it;
	}
	throw ExceptionFail();
	return (0);
}

#endif
