/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:59:05 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/04 18:01:38 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main ()
{
	std::vector<int> container1;

	container1.push_back(1);
	container1.push_back(2);
	container1.push_back(3);

	for (size_t i = 0; i < container1.size(); i++)
		std::cout << "elememto-->"<< container1[i] << std::endl;

	if (::easyFind(container1, 2))
		std::cout << "il numero da cercare è stato trovato" << std::endl;
	else
		std::cout << "il numero da cercare non è stato trovato" << std::endl;

	return (0);
}



