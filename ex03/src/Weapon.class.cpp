/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:20 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 10:30:59 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.class.hpp"
#include <string>

Weapon::Weapon( std::string weapon ){
	this->_type = weapon;
}
	
Weapon::~Weapon( void ){
}

Weapon& Weapon::operator=( const Weapon& other ){
	if (this != &other)
		this->_type = other._type;
	return *this;
}

const std::string&	Weapon::getType(){
	return (this->_type);
}

void	Weapon::setType( std::string newType){
	this->_type = newType;
}
