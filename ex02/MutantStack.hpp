/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:42:23 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/12 15:13:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack public std::stack<T>
{
	private:

		std::stack<T> mutantStack;

	public:
			
		typedef typename std::stack<T>::container::iterator iterator;

		MutantStack<T> &operator=(MutantStack<T> const &obj);

		iterator begin();
		iterator end();

		MutantStack<T>();
		MutantStack<T>(MutantStack const &obj);
		~MutantStack<T>();


};


MutantStack::MutantStack()
{

}

MutantStack::MutantStack(MutantStack<T> const &obj)
{
	(*this) = obj;
}

MutantStack::~MutantStack()
{

}


MutantStack &MutantStack::operator=(MutantStack const &obj)
{
	if (this == &obj)
		return (*this);

	(*this) = obj;
	return (*this);
}


iterator MutantStack::begin()
{
	return (this->container.begin());
}

iterator MutantStack::end()
{
	return (this->container.end());
}














