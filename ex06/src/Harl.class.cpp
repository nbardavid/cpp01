/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:49:13 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 21:48:37 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"
#include "../include/colors.h"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug ( void ){
	std::cout << Color::BLUE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << Color::RESET << std::endl;
} 

void Harl::info ( void ){
	std::cout << Color::YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << Color::RESET << std::endl;
}

void Harl::warning ( void ){
	std::cout << Color::ORANGE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << Color::RESET << std::endl;
}

void Harl::error( void ){
	std::cout << Color::RED << "This is unacceptable ! I want to speak to the manager now." << Color::RESET << std::endl;
}

int Harl::getLevelNumber(const std::string& LevelStr){
	if (LevelStr == "DEBUG") return (DEBUG_LEVEL);
	if (LevelStr == "INFO") return (INFO_LEVEL);
	if (LevelStr == "WARNING") return (WARNING_LEVEL);
	if (LevelStr == "ERROR") return (ERROR_LEVEL);
	return (UNKNOW_LEVEL);
}

void Harl::filter( std::string level ){
	switch ( this->getLevelNumber(level) ){
		case DEBUG_LEVEL:
			this->debug();
		case INFO_LEVEL:
			this->info();
		case WARNING_LEVEL:
			this->warning();
		case ERROR_LEVEL:
			this->error();
			break;
		default:
			std::cerr << Color::RED << "Error: There is no " << level << " level" << Color::RESET << std::endl;
	}
}
