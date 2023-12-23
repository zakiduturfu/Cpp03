/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:33:29 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/23 16:06:41 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string name ) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << GREEN << "constructor called" << RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout << GREEN << "copy construtor called" << RESET << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << GREEN << "Destructor called" << RESET << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
		this->_HitPoints = rhs._HitPoints;
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->_EnergyPoints > 0 || this->_HitPoints){
		std::cout << YELLOW << "ClapTrap " << this->_Name << " attacks " << target
		<< " , causing " << this->_AttackDamage << " points of damage !" << RESET << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "ClapTrap " << this->_Name << " cannot attack whithout energy point" << std::endl;
	}
	else{
		std::cout << RED << "ClapTrap " << this->_Name << " cannot attack beacause " << this->_Name<< std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= amount;

	std::cout << YELLOW << "ClapTrap " << this->_Name << " received " << amount
	<< " points of damage, it remain " << this->_HitPoints << " HitPoints" << RESET << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
	if (this->_EnergyPoints > 0 || this->_HitPoints > 0){

		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << YELLOW << "ClapTrap " << this->_Name << " receive " << amount
		<< " energy points, now " << this->_Name << " has " << this->_HitPoints 
		<< " hit points" << RESET << std::endl;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "ClapTrap " << this->_Name << " cannot repaire hit points without energy points"
		<< RESET << std::endl;
	}
	else {
			std::cout << RED << "ClapTrap " << this->_Name << " cannot repaire beacause" << this->_Name << " is dead"
		<< RESET << std::endl;
	}
	return ;
}
