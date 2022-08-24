/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:27:56 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 17:47:14 by jtaravel         ###   ########.fr       */
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
		Point(const float x, const float y);
		Point(Point const & cpy);
		~Point();

		float	getFixed_x(void) const;
		float	getFixed_y(void) const;
                Point & operator=(Point const & egal);
};

#endif
