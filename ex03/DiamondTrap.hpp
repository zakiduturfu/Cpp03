/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaki <zaki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:34:11 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/28 00:01:22 by zaki             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap( const std::string name);
	DiamondTrap( DiamondTrap const & src);
	~DiamondTrap();

	std::string	getName( void );
	int		getEnergyPoint( void );
	int		getAttackDamage( void );
	int		getHitPoint( void );

private:
	std::string	_Name;
	int			_Hitpoint;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif