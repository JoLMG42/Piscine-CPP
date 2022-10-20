/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:15:19 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/15 15:57:51 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

#define FORM_HPP

#include <iostream>
#include <string>

class	Bureaucrat;

class	Form
{
	private:
		std::string	_name;
		int		_gradeSigne;
		int		_gradeExec;
		int		_status;
	public:
		Form(void);
		Form(Form const & cpy);
		Form(std::string name, int gradeSigne, int gradeExec);
		~Form(void);
		std::string	getName(void);
		int		getGradeSigne(void);
		int		getGradeExec(void);
		int		getStatus(void);
		void		setGradeSigne(int n);
		void		setGradeExec(int n);
		void		setStatus(int n);
		int		beSigned(Bureaucrat k);
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
