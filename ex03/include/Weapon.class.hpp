/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:49 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/22 10:30:57 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class Weapon{
private:
	std::string _type;
public:
	const std::string&	getType();
	void	setType( std::string newType);
	Weapon( const std::string weapon );
	Weapon& operator=( const Weapon& other );
	~Weapon( void );
};

#endif
