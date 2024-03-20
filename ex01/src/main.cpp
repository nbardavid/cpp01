/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:00:06 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/20 18:37:45 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main( void ){
	Zombie *Horde = Zombie::zombieHorde(10, "Steven");
	for (int i = 0; i < 10; i++){
		Horde[i].Announce();
	}
	delete[] Horde;
	return (0);
}
