/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:16:46 by jtaravel          #+#    #+#             */
/*   Updated: 2022/09/14 16:05:30 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class	Bureaucrat
{
	private:
		std::string	_name;
		int		_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & cpy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const & egal);
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	setGrade(int n);

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

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & flux);

#endif
