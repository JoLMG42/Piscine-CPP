/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:24:52 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/04 17:25:08 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP 

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index;
		int	old;
		public:
		PhoneBook(void);
		~PhoneBook(void);
		void	search();
		void	add();
		void    search_spe_contact(char c);

};	

#endif
