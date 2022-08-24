/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:35:26 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 17:58:32 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y):_x(x), _y(y)
{
	return ;
}

Point::Point(Point const & cpy)
{
	*this = cpy;
	return ;
}

Point::~Point()
{
	return ;
}

float Point::getFixed_x(void) const
{
	return (_x.toFloat());
}

float Point::getFixed_y(void) const
{
	return (_y.toFloat());
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
