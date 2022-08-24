/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:45:33 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 22:41:20 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(Fixed(2), Fixed(4));
	Point b(Fixed(8), Fixed(2));
	Point c(Fixed(3), Fixed(-3));
	Point d(Fixed(9), Fixed(9));
	bsp(a,b, c, d);
	return 0;
}
