/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:42:44 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/26 14:22:12 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <stdio.h>

int	check_in_triangle(float ab, float bc, float ac, float pointA, float pointB, float pointC)
{
	if (pointA + pointB == ab)
	{
		return (1);
	}
	if (pointB + pointC == bc)
	{
		return (1);
	}
	if (pointA + pointC == ac)
	{
		return (1);
	}
	return (0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	P;
	float	ab;
	float	bc;
	float	ac;
	float	pointA;
	float	pointB;
	float	pointC;
	float	total_d_point;

	ab = std::sqrt(std::pow(b.getFixed_x().toFloat() - a.getFixed_x().toFloat(), 2) + pow(b.getFixed_y().toFloat() - a.getFixed_y().toFloat(), 2));
	bc = std::sqrt(std::pow(c.getFixed_x().toFloat() - b.getFixed_x().toFloat(), 2) + pow(c.getFixed_y().toFloat() - b.getFixed_y().toFloat(), 2));
	ac = std::sqrt(std::pow(c.getFixed_x().toFloat() - a.getFixed_x().toFloat(), 2) + pow(c.getFixed_y().toFloat() - a.getFixed_y().toFloat(), 2));
	pointA = std::sqrt(std::pow(a.getFixed_x().toFloat() - point.getFixed_x().toFloat(), 2) + pow(a.getFixed_y().toFloat() - point.getFixed_y().toFloat(), 2));
	pointB = std::sqrt(std::pow(b.getFixed_x().toFloat() - point.getFixed_x().toFloat(), 2) + pow(b.getFixed_y().toFloat() - point.getFixed_y().toFloat(), 2));
	pointC = std::sqrt(std::pow(c.getFixed_x().toFloat() - point.getFixed_x().toFloat(), 2) + pow(c.getFixed_y().toFloat() - point.getFixed_y().toFloat(), 2));
	total_d_point = pointA + pointB + pointC;
	P = ab + bc + ac;
	if (P / 2 <= total_d_point && total_d_point <= P - ab && total_d_point <= P - bc && total_d_point <= P - ac && !check_in_triangle(ab, bc, ac, pointA, pointB, pointC))
		std::cout << "Point inside the triangle" << std::endl;
	else
		std::cout << "Point not inside the triangle" << std::endl;
	return (0);
}

