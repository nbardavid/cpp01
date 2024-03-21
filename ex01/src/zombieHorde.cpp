/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:21:52 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:37:55 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/colors.h"
#include <iostream>

Zombie* Zombie::zombieHorde( int N, std::string name ){
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombieHorde[i].setName(name);
	}
	std::cout << Color::GREEN << "A horde of " << N << " " << name << " come back to life !" << Color::RESET << std::endl;
	return (zombieHorde);
}
