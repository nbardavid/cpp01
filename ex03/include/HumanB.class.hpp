/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:45 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 11:29:49 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include <string>
#include "Weapon.class.hpp"

class HumanB{
private:
	Weapon* _weapon;
	std::string _name;
public:
	HumanB	( const std::string name );
	~HumanB	( void );
	void	attack( void );
	void	setWeapon( Weapon& newWeapon );
};

#endif
