/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:06:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/06 16:43:05 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
	Span sp = Span(2);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);

	//std::cout << sp.shortestSpan() << std::endl;
	//std::cout << sp.longestSpan() << std::endl;
	

	return (0);
}


