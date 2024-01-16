/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:23:18 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/15 19:04:22 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << GREEN << "Scavtrap constructor called" << RESET << std::endl;

	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap destructor called" << RESET << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << BLUE << this->_Name << " is now in guard keep mode" << RESET << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints){
		std::cout << "Scavtrap " << this->_Name << " attacks " << target
		<< ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "Scavtrap " << this->_Name << " cannot attack whithout energy point" << RESET << std::endl;
	}
	else{
		std::cout << RED << "Scavtrap " << this->_Name << " cannot attack beacause " << this->_Name << RESET<< std::endl;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "Scavtrap " << this->_Name << " is dead" << std::endl;
		return ;
	}
	this->_HitPoints -= amount;

	if (this->_HitPoints <= 0)
		this->_HitPoints = 0;

	std::cout << "Scavtrap " << this->_Name << " received " << amount
	<< " points of damage, it remain " << this->_HitPoints << " HitPoints" << std::endl;
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{

		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << "ScavTrap " << this->_Name << " receive " << amount
		<< " energy points, now " << this->_Name << " has " << this->_HitPoints 
		<< " hit points" << std::endl;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "ScavTrap " << this->_Name << " cannot repaire hit points without energy points"
		<< RESET << std::endl;
	}
	else {
			std::cout << RED << "ScavTrap " << this->_Name << " cannot repaire beacause" << this->_Name << " is dead"
		<< RESET << std::endl;
	}
	return ;
}
