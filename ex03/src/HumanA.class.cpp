/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:51 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:47:32 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.class.hpp"
#include "../include/Weapon.class.hpp"
#include "../include/colors.h"
#include <iostream>

HumanA::HumanA(const std::string name, const Weapon &weapon ) : weapon(weapon){
	this->name = name;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	if (this->weapon.getType().empty() == true){
		std::cerr << Color::RED << this->name << "can't attack, he does not have any weapon" << Color::RESET << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
