/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:34:31 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/21 21:42:14 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <string>
#include <iostream>

# define DEBUG_LEVEL 1
# define INFO_LEVEL 2
# define WARNING_LEVEL 3
# define ERROR_LEVEL 4
# define UNKNOW_LEVEL 0

class Harl {
public:
	Harl();
	~Harl();
	void	filter( std::string level );

private:
	int		getLevelNumber( const std::string& LevelStr );
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
