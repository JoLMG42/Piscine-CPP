/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:16:46 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/29 10:51:19 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP

#define CAST_HPP

#include <iostream>
#include <string>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define CHAR_MAX 127
#define CHAR_MIN 31

class	Cast
{
	private:
		std::string	_value;
		double		_nbr;
	public:
		Cast(const char *value);
		~Cast(void);
		Cast(Cast const &cpy);
		Cast &operator=(Cast const & egal);
		std::string	getValue(void);
		double		getNbr(void);
		
		void	affChar(void);
		void	affInt(void);
		void	affDouble(void);
		void	affFloat(void);
};

#endif
