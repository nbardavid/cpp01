/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:39:12 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/20 19:03:49 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void ){
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;


	std::cout << "string adress    : " << &string << std::endl;
	std::cout << "stringPTR adress : " << stringPTR << std::endl;
	std::cout << "stringREF adress : " << &stringREF << std::endl << std::endl;
	std::cout << "string value   : " << string << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	return (0);
}
