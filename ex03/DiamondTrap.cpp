/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaki <zaki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:34:11 by zlemery           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/16 14:11:19 by zlemery          ###   ########.fr       */
=======
/*   Updated: 2023/12/28 00:03:43 by zaki             ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


<<<<<<< HEAD
DiamondTrap::DiamondTrap( const std::string name ) : ClapTrap( name + "_Clap_Name" ), ScavTrap( name  ), FragTrap( name )
=======
DiamondTrap::DiamondTrap( const std::string name ) : ClapTrap( name + "_Clap_Name" ), ScavTrap( name ), FragTrap( name )
>>>>>>> refs/remotes/origin/main
{
	std::cout << GREEN << "DiamondTrap constructor called" << RESET << std::endl;

	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = FragTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << GREEN << "DiamondTrap destructor called" << RESET << std::endl;
	return ;
}

void	DiamondTrap::highFivesGuys( void )
{
	std::cout << BLUE << this->_Name << " ask for a positive high five" << RESET << std::endl;
	return ;
}

void DiamondTrap::guardGate()
{
	std::cout << BLUE << this->_Name << " is now in guard keep mode" << RESET << std::endl;
	return ;
}

std::string	DiamondTrap::getName( void )
{
	return this->_Name;
}

int	DiamondTrap::getAttackDamage( void )
{
	return this->_AttackDamage;
}

int	DiamondTrap::getEnergyPoint( void )
{
	return this->_EnergyPoints;
}

int	DiamondTrap::getHitPoint( void )
{
	return this->_Hitpoint;
}