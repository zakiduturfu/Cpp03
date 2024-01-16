/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaki <zaki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:34:11 by zlemery           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/16 13:57:10 by zlemery          ###   ########.fr       */
=======
/*   Updated: 2023/12/28 00:01:22 by zaki             ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
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

<<<<<<< HEAD
	void	guardGate();
	void	highFivesGuys( void );
=======
	std::string	getName( void );
	int		getEnergyPoint( void );
	int		getAttackDamage( void );
	int		getHitPoint( void );
>>>>>>> refs/remotes/origin/main

private:
	std::string	_Name;
	int			_Hitpoint;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif