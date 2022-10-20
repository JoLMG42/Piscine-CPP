/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:35:26 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/03 12:08:27 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <vector>
#include <algorithm>

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack(void)
		{
			return ;
		}
		MutantStack(MutantStack const & cpy)
		{
			*this = cpy;
		}
		~MutantStack(void)
		{
			return ;
		}
		MutantStack & operator=(MutantStack const & egal)
		{
			(void)egal;
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void)
		{
			return (std::stack<T>::c.begin());
		}
		iterator	end(void)
		{
			return (std::stack<T>::c.end());
		}
};

#endif
