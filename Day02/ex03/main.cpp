/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:45:33 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/03 14:58:36 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(Fixed(2), Fixed(4));
	Point a2(Fixed(2), Fixed(2));
	Point b(Fixed(8), Fixed(2));
	Point b2(Fixed(4), Fixed(-1));
	Point c(Fixed(3), Fixed(-3));
	Point c2(Fixed(2), Fixed(-2));
	Point d(Fixed(3), Fixed(2));
	Point d2(Fixed(5), Fixed(4));
	Point d3(Fixed(2), Fixed(4));
	Point d4(Fixed(2), Fixed(0));
	bsp(a,b, c, d);
	bsp(a,b, c, d2);
	bsp(a,b, c, d3);
	bsp(a,b, c2, d4);
	return 0;
}
