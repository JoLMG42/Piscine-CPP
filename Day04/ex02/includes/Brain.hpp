/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:53:37 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/09 18:02:50 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const & cpy);
		~Brain(void);
};

#endif
