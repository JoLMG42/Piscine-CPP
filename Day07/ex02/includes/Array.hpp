/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:30:58 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/04 10:57:58 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class	Array
{
	private:
		T		*tab;
		unsigned int	_n;
	public:
		Array(void)
		{
			_n = 0;
			tab = NULL;
		}

		Array(unsigned int n)
		{
			if (n > 1000)
				n = 1000;
			tab = NULL;
			_n = n;
			tab = new T[n]();
		}

		Array(Array const & cpy)
		{
			*this = cpy;
		}

		~Array(void)
		{
			std::cout << "Destructor called" << std::endl;
			if (tab)
				delete [] tab;
		}

		T	getTab(int i) const
		{
			return tab[i];
		}
		
		T & operator[](int  i)
		{
			if (i < 0 || (unsigned int)i >= size())
				throw ExceptionThrow();
			return tab[i];
		}
		
		T & operator[](int  i) const
		{
			if (i < 0 || (unsigned int)i >= size())
				throw ExceptionThrow();
			return tab[i];
		}

		Array<T> & operator=(Array const & egal)
		{
			unsigned int	i = egal.size();
			_n = i;
			tab = new T[i]();
			for (unsigned int j = 0; j < i; j++)
			{
				tab[j] = egal.getTab(j);
		}
			return *this;
		}

		unsigned int	size(void) const
		{
			return _n;
		}
	class	ExceptionThrow: public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Exception jetee !");
			}
	};
			

};

#endif
