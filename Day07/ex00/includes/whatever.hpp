/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:44:50 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/27 16:46:12 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

#include <iostream>
#include <string>


template <typename T>

void	swap(T& a, T& b)
{
	T c = a;

	a = b;
	b = c;
}

template <typename T>
T	max(const T& a, const T& b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
T	min(const T& a, const T& b)
{
	if (a < b)
		return a;
	return b;
}

#endif
