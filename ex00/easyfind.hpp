/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:58:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/04 18:13:41 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

template <typename T>
bool easyFind(T container, int index)
{
	for (size_t i = 0; i < container.size(); i++)
		if (container[i] == index)
			return (true);

	return (false);
}


