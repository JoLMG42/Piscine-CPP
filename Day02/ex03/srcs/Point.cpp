/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:35:26 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 23:26:51 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0)
{
	return ;
}

Point::Point(Fixed const x, Fixed const y):_x(x), _y(y)
{
	return ;
}

Point::Point(Point const & cpy):_x(cpy.getFixed_x()), _y(cpy.getFixed_y())
{
	return ;
}

Point::~Point()
{
	return ;
}

Fixed Point::getFixed_x(void) const
{
	return (_x);
}

Fixed Point::getFixed_y(void) const
{
	return (_y);
}

Point & Point::operator=(Point const & egal)
{
	(void)egal;
	/*if (this != &egal)
	{
		this->_x = egal.getRawBits();
		this->_y = egal.getRawBits();
	}*/
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Point const & flux)
{
	o << flux.getFixed_x() << flux.getFixed_y();
	return o;
}
