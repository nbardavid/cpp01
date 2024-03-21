/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:34:31 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 10:21:40 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include <string>
#include "Weapon.class.hpp"

class HumanA{
private:
	Weapon weapon;
	std::string name;
public:
	HumanA(const std::string name, const Weapon &weapon );
	~HumanA( void );
	void	attack( void );
	void	setWeapon( const Weapon &newWeapon );
};

#endif
