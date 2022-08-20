/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:33:48 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/20 05:15:51 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int	_n;
		static const int	_bits = 8;
	public:
		Fixed(void);
		Fixed(const int entier);
		Fixed(const float flottant);
		Fixed(Fixed const & cpy);
		~Fixed(void);
		
		Fixed &	operator=(Fixed const & egal);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & flux);

#endif
