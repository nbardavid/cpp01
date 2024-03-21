/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:49:14 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:54:32 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"

int	main( void ){
	Harl theRealHarl;
	theRealHarl.complain("DEBUG");
	theRealHarl.complain("INFO");
	theRealHarl.complain("WARNING");
	theRealHarl.complain("ERROR");
	theRealHarl.complain("Zlll");
	return (0);
}
