/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:38:38 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/20 05:15:43 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _n;
}

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & egal)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_n = egal._n;
	return *this;
}

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
