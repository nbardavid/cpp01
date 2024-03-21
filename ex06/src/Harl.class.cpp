/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:49:13 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:40:42 by nbardavi         ###   ########.fr       */
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

void Harl::complain( std::string level ){
	void (Harl::*complains[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (level == levels[i]){
			(this->*complains[i])();
			return;
		}
	}
	std::cerr << Color::RED << "Error: There is no " << level << " level" << Color::RESET ;
}
