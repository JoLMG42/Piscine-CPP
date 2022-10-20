/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:01:44 by jtaravel          #+#    #+#             */
/*   Updated: 2022/10/03 12:23:07 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int	main()
{
	MutantStack<int> mstack;
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << "lst top: " << lst.back() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack top: " << mstack.top() << std::endl;
	mstack.pop();
	lst.pop_back();
	std::cout << "mstack size: " << mstack.size() << std::endl;
	std::cout << "lst size: " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	lst.push_back(-99);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(-99);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itel = lst.end();
	++it;
	--it;
	//++itl;
	//--itel;
	while (it != ite)
	{
		std::cout << "mstack: " << *it << std::endl;
		++it;
	}
	while (itl != itel)
	{
		std::cout << "lst: " << *itl << std::endl;
		++itl;
	}
	std::stack<int> s(mstack);
	return (0);
}
