/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/27 14:50:06 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << "Scavtrap constructor called" << std::endl;

	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << this->_Name << " is now in guard keep mode" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_EnergyPoints > 0 || this->_HitPoints){
		std::cout << YELLOW << "Scavtrap " << this->_Name << " attacks " << target
		<< " , causing " << this->_AttackDamage << " points of damage !" << RESET << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "Scavtrap " << this->_Name << " cannot attack whithout energy point" << std::endl;
	}
	else{
		std::cout << RED << "Scavtrap " << this->_Name << " cannot attack beacause " << this->_Name<< std::endl;
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

	std::cout << YELLOW << "Scavtrap " << this->_Name << " received " << amount
	<< " points of damage, it remain " << this->_HitPoints << " HitPoints" << RESET << std::endl;
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount)
{
	if (this->_EnergyPoints > 0 || this->_HitPoints > 0){

		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << YELLOW << "Scavtrap " << this->_Name << " receive " << amount
		<< " energy points, now " << this->_Name << " has " << this->_HitPoints 
		<< " hit points" << RESET << std::endl;
	}
	else if (!this->_EnergyPoints){
		std::cout << RED << "Scavtrap " << this->_Name << " cannot repaire hit points without energy points"
		<< RESET << std::endl;
	}
	else {
			std::cout << RED << "Scavtrap " << this->_Name << " cannot repaire beacause" << this->_Name << " is dead"
		<< RESET << std::endl;
	}
	return ;
}
