/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:15:19 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/22 14:00:55 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <iostream>
#include <string>

class	Bureaucrat;

class	Form
{
	protected:
		std::string	_name;
		int		_gradeSigne;
		int		_gradeExec;
		int		_status;
	public:
		Form(void);
		Form(Form const & cpy);
		Form(std::string name, int gradeSigne, int gradeExec);
		virtual ~Form(void);
		std::string	getName(void) const;
		int		getGradeSigne(void) const;
		int		getGradeExec(void) const;
		int		getStatus(void) const;
		void		setGradeSigne(int n);
		void		setGradeExec(int n);
		void		setStatus(int n);
		int		beSigned(Bureaucrat k);
		virtual void		execute(Bureaucrat const & executor) const = 0;
	class	GradeTooHighException
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade value too high");
			}
	};
	
	class	GradeTooLowException
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade value too low");
			}
	};

};

#endif
