/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:57:51 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 17:14:47 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	_n = n;
	return ;
}

Span::Span(Span const & cpy)
{
	*this = cpy;
}

Span::~Span(void)
{
	return ;
}

int	Span::getVector(int idx)
{
	return _vector[idx];
}

void	Span::addNumber(int x)
{
	if (_vector.size() >= _n)
	{
		std::cout << "Vector full, can't add " << x << std::endl;
		return ;
	}
	else
		_vector.push_back(x);
}

int	Span::longestSpan(void)
{
	if (_vector.size() > 1)
		return *std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end());
	throw ExceptionSize();
	return (0);
}

int	Span::shortestSpan(void)
{
	int	swap;
	int	tmp;
	std::sort(_vector.begin(), _vector.end());
	tmp = (getVector(1) - getVector(2)) * -1;
	for (unsigned int i = 0; i < _n; i++)
	{
		if (i  + 1 < _n)
			swap = (getVector(i) - getVector(i + 1)) * -1;
		if (swap < tmp)
			tmp = swap;
	}
	return tmp;
}
