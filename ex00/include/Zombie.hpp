/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:34:31 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/20 16:45:49 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie{
private:
	std::string name;
public:
	static Zombie *newZombie( const std::string& name );
	static void randomChump( const std::string& name );
	Zombie( const std::string& name );
	~Zombie( void );
	void Announce( void );
};

#endif
