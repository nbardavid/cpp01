/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:03:32 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/20 17:07:37 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main( void )
{
	Zombie::randomChump("Bob");
	Zombie *patrick = Zombie::newZombie("Patrick");
	patrick->Announce();
	delete patrick;
	return (0);
}
