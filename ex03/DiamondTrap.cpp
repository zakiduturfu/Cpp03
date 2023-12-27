/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaki <zaki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:34:11 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/28 00:03:43 by zaki             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


DiamondTrap::DiamondTrap( const std::string name ) : ClapTrap( name + "_Clap_Name" ), ScavTrap( name ), FragTrap( name )
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = FragTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
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