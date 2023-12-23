/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:36:28 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/23 15:59:48 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public: 
	ScavTrap( const std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap();

	void	guardGate();

private:
	ScavTrap( void );
};

#endif