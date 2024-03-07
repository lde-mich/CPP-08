/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:09:03 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/07 10:43:33 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:

		std::vector<unsigned int> container;
		unsigned int size;

	public:

		unsigned int const &getSize() const;

		Span &operator=(Span const &obj);

		void addNumber(unsigned int n);

		unsigned int shortestSpan();
		unsigned int longestSpan();

		Span(unsigned int size);
		Span(Span const &obj);
		Span();
		~Span();


		class MemoryFullException: public std::exception
        {
            public:
                virtual const char	*what() const throw()
				{
					return ("Error, memory container full");
				};
        };

};
