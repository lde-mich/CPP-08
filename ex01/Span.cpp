/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:54 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/05 17:55:36 by lde-mich         ###   ########.fr       */
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
	this->container(n);
	for (int i = 0; i < this->container.size(); i++)
		this->container[i] = NULL;
}

Span::~Span()
{

}


Span &Span::operator=(Span const &obj)
{

}














