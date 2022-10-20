/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:54:03 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 16:42:42 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <algorithm> 

class	Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_vector;
	
	public:
		Span(unsigned int n);
		Span(Span const & cpy);
		~Span(void);
		void	addNumber(int x);
		int	shortestSpan(void);
		int	longestSpan(void);
		int	getVector(int idx);
	class ExceptionSize: public std::exception
	{
		public:	
			virtual const char * what() const throw()
			{
				return ("Size too small");
			}
	};
};

#endif
