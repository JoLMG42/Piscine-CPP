/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:43 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:03:26 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		std::string	getTarget(void) const;
		void		setTarget(std::string);
		void		execute(Bureaucrat const & executor) const;
		PresidentialPardonForm	& operator=(PresidentialPardonForm const & egal);
};

#endif
