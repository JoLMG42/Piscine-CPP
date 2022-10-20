/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:33:48 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/30 15:01:22 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

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
		Fixed &	operator+(Fixed const & plus1);
		Fixed &	operator-(Fixed const & minus1);
		Fixed &	operator*(Fixed const & mult1);
		Fixed &	operator/(Fixed const & div1);
		bool	operator>(Fixed const & sup) const;
		bool	operator<(Fixed const & inf) const;
		bool	operator>=(Fixed const & sup_egal) const;
		bool	operator<=(Fixed const & inf_egal) const;
		bool	operator!=(Fixed const & diff) const;
		Fixed &	operator++();
		Fixed 	operator++(int n);
		Fixed &	operator--();
		Fixed 	operator--(int n);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
		static	Fixed& min(Fixed &a, Fixed &b);
		static  const	Fixed& min(const Fixed &a, const Fixed &b);
		static	Fixed& max(Fixed &a, Fixed &b);
		static  const	Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & flux);

#endif
