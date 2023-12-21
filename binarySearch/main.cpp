/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:00:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/21 18:33:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "binarySearch.hpp"

int main( void ) {

	std::vector<int> array;
	int target = 42;
	int randomNb;

	std::srand( time( NULL ) );
	array.reserve( 1000000 );
	for ( size_t i = 0; i < 1000000; i++ ) {

		randomNb = rand() % 5500 + 1;
		array.push_back( i );
	}
	
	int value = binarySearch( array, target );
	if ( value != -1 )
		std::cout << value << std::endl;
	else
		std::cout << "the element not found in this array!" << std::endl;
	return 0;
}