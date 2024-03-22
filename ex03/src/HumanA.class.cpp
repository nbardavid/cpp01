/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:51 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 11:15:48 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.class.hpp"
#include "../include/Weapon.class.hpp"
#include "../include/colors.h"
#include <iostream>

HumanA::HumanA(const std::string _name, Weapon &weapon ) : _weapon(&weapon){
	this->_name = _name;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	if (this->_weapon == NULL){
		std::cerr << Color::RED << this->_name << "can't attack, he does not have any weapon" << Color::RESET << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
