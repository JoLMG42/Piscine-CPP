/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:38:38 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/24 12:19:21 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_n(0)
{
	return ;
}

Fixed::Fixed(Fixed const & cpy)
{
	*this = cpy;
	return ;
}

Fixed::Fixed(const float flottant)
{
	this->_n = (flottant * (1 << _bits));
}

Fixed::Fixed(const int entier)
{
	_n = entier << _bits;
}

Fixed::~Fixed(void)
{
	return ;
}

int	Fixed::getRawBits(void) const
{
	return _n;
}

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
	return ;
}

/*	Comparaison operators	*/

Fixed &	Fixed::operator=(Fixed const & egal)
{
	if (this != &egal)
		this->_n = egal.getRawBits();
	return *this;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

bool	Fixed::operator<=(Fixed const & value) const
{
	return (this->_n <= value.getRawBits());
}

bool	Fixed::operator>=(Fixed const &value) const
{
	return (this->_n >= value.getRawBits());
}

bool	Fixed::operator<(Fixed const & value) const
{
	return (this->_n < value.getRawBits());
}

bool	Fixed::operator>(Fixed const &value) const
{
	return (this->_n > value.getRawBits());
}

bool	Fixed::operator!=(Fixed const & value) const
{
	return (this->_n != value.getRawBits());
}

/*	END	*/

/*	Arithmetics operators	*/

Fixed & Fixed::operator+(Fixed const & x)
{
	this->setRawBits(this->_n + x.getRawBits());
	return *this;
}

Fixed & Fixed::operator-(Fixed const & x)
{
	this->setRawBits(this->_n - x.getRawBits());
	return *this;
}

Fixed & Fixed::operator*(const Fixed & x)
{	
	*this = this->toFloat() * x.toFloat();
	return *this;
}

Fixed & Fixed::operator/(Fixed const & x)
{
	this->setRawBits((this->_n << this->_bits) / x.getRawBits());
	return *this;
}

Fixed & Fixed::operator--()
{
	this->_n--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--*this;
	return tmp;
}

Fixed & Fixed::operator++()
{
	this->_n++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++*this;
	return tmp;
}

/*	END	*/

float	Fixed::toFloat(void) const
{
	return ((float) this->_n / (float)(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return _n >> _bits;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & flux)
{
	o << flux.toFloat();
	return o;
}
