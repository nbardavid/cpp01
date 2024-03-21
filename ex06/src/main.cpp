/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:49:14 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 21:49:23 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"

int	main( void ){
	Harl theRealHarl;
	theRealHarl.filter("DEBUG");
	std::cout << std::endl;
	theRealHarl.filter("INFO");
	std::cout << std::endl;
	theRealHarl.filter("WARNING");
	std::cout << std::endl;
	theRealHarl.filter("ERROR");
	return (0);
}
