/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:54 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/06 12:34:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{

}

Span::Span(Span const &obj)
{
	(*this) = obj;
}

Span::Span(unsigned int n)
{
	this->size = n;
	this->container.resize(this->size);
	for (unsigned int i = 0; i < this->container.size(); i++)
		this->container[i] = 0;
}

Span::~Span()
{

}


Span &Span::operator=(Span const &obj)
{
	if (this == &obj)
		return (*this);
	
	this->size = obj.size;
	for (unsigned int i = 0; i < obj.container.size(); i++)
		this->container[i] = obj.container[i];

	return (*this);
}


unsigned int const &Span::getSize() const
{
	return (this->size);
}


void Span::addNumber(unsigned int n)
{
	std::cout << "size-->" << this->size << std::endl;

	for (unsigned int i = 0; i < this->size; i++)
	{
		std::cout << "i-->" << i << "   c-->" << container[i]<< "\n" << std::endl;

		if (this->container[i] == 0)
		{
			container.push_back(n);
			return ;
		}
	}

	throw Span::MemoryFullException();

}


unsigned int Span::shortestSpan()
{
	unsigned int n = 5;
	return (n);
}

unsigned int Span::longestSpan()
{
	unsigned int n = 5;
	return (n);
}









