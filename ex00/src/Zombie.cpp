/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:03:28 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/20 17:03:07 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/colors.h"
#include <iostream>

Zombie::Zombie( const std::string& name ){
	this->name = name;
	std::cout << Color::GREEN << name << ": Came back to life" << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << Color::RED << this->name << ": Died again" << std::endl;
}

void Zombie::Announce( void ){
	std::cout << Color::BLUE << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

