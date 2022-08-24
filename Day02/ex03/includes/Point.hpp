/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:27:56 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 23:26:34 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(Point const & cpy);
		~Point();

		Fixed	getFixed_x(void) const;
		Fixed	getFixed_y(void) const;
                Point & operator=(Point const & egal);
};

std::ostream &	operator<<(std::ostream & o, Point const & flux);

#endif
