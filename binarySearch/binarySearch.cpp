/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binarySearch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:59:03 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/21 18:33:34 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binarySearch.hpp"

int binarySearch( std::vector<int> array, int target ) {

	double low = 0;
	double high = array.size() - 1;

	while ( low <= high ) {
		
		double middle = low + ( high - low ) / 2;
		int value = array[middle];

		if ( value < target )
			low = middle + 1;
		else if ( value > target )
			high = middle - 1;
		else
			return middle;
	}
	return -1;
}