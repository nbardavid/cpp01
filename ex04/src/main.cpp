/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:57:14 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 19:38:38 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.h"
#include <string>
#include <iostream>
#include <fstream>

void secure(int argc){
	if (argc < 4){
		std::cout << Color::RED << "Too few arguments" << Color::RESET << std::endl;
		exit (EXIT_FAILURE);
	}
}

int main( int argc, char **argv ){
	size_t index = 0;

	secure(argc);
	std::ifstream inFile(argv[1]);
	if (!inFile){
		std::cerr << Color::RED << "Error opening file : " << argv[1] << Color::RESET << std::endl;
		exit(EXIT_FAILURE);
	}

	std::ofstream outFile("Outfile");
	if (!outFile){
		std::cerr << Color::RED << "Error opening file : Outfile" << Color::RESET << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::string line;
	std::string templine1;
	std::string templine2;
	while(std::getline(inFile, line)){
		index = 0;
		while((index = line.find(s1, index)) != std::string::npos){
			templine1 = line.substr(0, index);
			templine2 = line.substr(index + s1.length(), line.length());
			line = templine1 + s2 + templine2;
			index += s2.length();
		}
		outFile << line << std::endl;
	}
}
