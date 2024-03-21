/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:53 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:45:44 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.class.hpp"
#include "../include/Weapon.class.hpp"
#include "../include/colors.h"
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
	if (this->_weapon->getType().empty() == true){
		std::cerr << Color::RED << this->_name << "can't attack, he does not have any weapon" << Color::RESET << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
