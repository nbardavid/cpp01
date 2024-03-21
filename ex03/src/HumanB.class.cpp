/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:53 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 11:48:31 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.class.hpp"
#include "../include/Weapon.class.hpp"
#include <iostream>

HumanB::HumanB( const std::string name ){
	this->_name = name;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon( Weapon& newWeapon ) {
	this->_weapon = &newWeapon;
}

void HumanB::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
