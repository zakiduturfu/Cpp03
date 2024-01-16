/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/15 19:04:08 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string name ) : ClapTrap(name)
{
	std::cout << GREEN << "FragTrap constructor called" << RESET << std::endl;

	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap destructor called" << GREEN  << std::endl;
	return ;
}

void FragTrap::guardGate()
{
	std::cout << this->_Name << "is now in guard keep mode" << std::endl;
	return ;
}

void	FragTrap::attack( const std::string& target )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints){
		std::cout << "FragTrap " << this->_Name << " attacks " << target
		<< ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "FragTrap " << this->_Name << " cannot attack whithout energy point" << std::endl;
	}
	else{
		std::cout << RED << "FragTrap " << this->_Name << " cannot attack beacause " << this->_Name<< std::endl;
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_Name << " is dead" << std::endl;
		return ;
	}
	this->_HitPoints -= amount;

	if (this->_HitPoints <= 0)
		this->_HitPoints = 0;

	std::cout << "FragTrap " << this->_Name << " received " << amount
	<< " points of damage, it remain " << this->_HitPoints << " HitPoints" << RESET << std::endl;
	return ;
}

void	FragTrap::beRepaired( unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0
		){

		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << "FragTrap " << this->_Name << " receive " << amount
		<< " energy points, now " << this->_Name << " has " << this->_HitPoints 
		<< " hit points" << RESET << std::endl;
	}
	else if (!this->_EnergyPoints){
		std::cout << RED << "FragTrap " << this->_Name << " cannot repaire hit points without energy points"
		<< RESET << std::endl;
	}
	else {
			std::cout << RED << "FragTrap " << this->_Name << " cannot repaire beacause" << this->_Name << " is dead"
		<< RESET << std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << BLUE << this->_Name << " ask for a positive high five" << RESET << std::endl;
	return ;
}