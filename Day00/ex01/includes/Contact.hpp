/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:06:57 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/04 17:29:40 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>


class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
	
	public:
		Contact(void);
		~Contact(void);
		void	search();
		void	add();
		void	add_new();
		void	print_contact();
		void    spe_contact();

};

#endif
