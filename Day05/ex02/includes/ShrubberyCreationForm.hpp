/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:28 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:03:35 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		std::string	getTarget(void) const;
		void		setTarget(std::string target);
		void		execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm	& operator=(ShrubberyCreationForm const & egal);
};

#endif
