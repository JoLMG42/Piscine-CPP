/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:42:44 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 23:27:47 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	P;
	float	ab;
	//float	bc;
	//float	ac;

	std::cout << a.getFixed_x().toFloat() << std::endl;
	(void)P;
	(void)ab;
	(void)b;
	//ab = std::sqrt(std::pow(b.getFixed_x() - a.getFixed_x(), 2) + pow(b.getFixed_y() - a.getFixed_y(), 2));
	/*bc = std::sqrt(std::pow(c._x - b._x) + pow(c._y, b._y));
	ac = std::sqrt(std::pow(c._x - a._x) + pow(c._y, a._y));*/
	(void)point;
	//P = ab;
	//std::cout << "test = " << P << std::endl;
	(void)c;
	return (0);
}

