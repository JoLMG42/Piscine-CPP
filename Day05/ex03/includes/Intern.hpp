/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:08:42 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 15:02:08 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class	Intern
{
	private:
		Form	*Shrubbery(std::string &target);
		Form	*Presidential(std::string &target);
		Form	*Robotomy(std::string &target);
	public:
		Intern(void);
		Intern(Intern const & cpy);
		~Intern(void);

		Intern & operator=(Intern const & egal);
		Form	*makeForm(std::string nameForm, std::string target);
};

#endif
