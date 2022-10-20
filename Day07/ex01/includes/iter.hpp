/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:47:30 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/27 17:25:32 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>

void	f(T &n)
{
	std::cout << n;
}

template <typename T>
void	iter(T *tab, int len, void f(T &))
{
	for (int i = 0; i < len; i++)
		f(tab[i]);
	std::cout << std::endl;
}

#endif
