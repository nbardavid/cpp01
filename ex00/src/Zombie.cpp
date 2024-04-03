/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:03:28 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 09:28:40 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/colors.h"
#include <iostream>

Zombie::Zombie( const std::string& name ){
	this->name = name;
	std::cout << GREEN << name << ": Came back to life" << RESET << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << RED << this->name << ": Died again" << RESET << std::endl;
}

void Zombie::Announce( void ){
	std::cout << BLUE << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl; 
}

