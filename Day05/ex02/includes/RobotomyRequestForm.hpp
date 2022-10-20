/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:28 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:03:46 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		std::string	getTarget(void) const;
		void		setTarget(std::string target);
		void		execute(Bureaucrat const & executor) const;
		RobotomyRequestForm	& operator=(RobotomyRequestForm const & egal);
};

#endif
