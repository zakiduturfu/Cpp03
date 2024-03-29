/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:33:29 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/15 18:55:29 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/*--------------------- CONSTRUCTOR ------------------*/
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

/*--------------------- DESTRUCTOR -------------------*/

ClapTrap::~ClapTrap( void )
{
	std::cout << GREEN << "Destructor called" << RESET << std::endl;
	return ;
}

/*--------------------- OPERATOR OVERLOAD ------------*/

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
		this->_HitPoints = rhs._HitPoints;
	return *this;
}

/*--------------------- MEMBER FUNCTION --------------*/

void	ClapTrap::attack( const std::string& target )
{
	if (this->_EnergyPoints > 0 && this->_HitPoints){
		std::cout << "ClapTrap " << this->_Name << " attacks " << target
		<< ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoints--;
	}
	else if (this->_EnergyPoints){
		std::cout << RED << "ClapTrap " << this->_Name << " cannot attack whithout energy point" << RESET << std::endl;
	}
	else{
		std::cout << RED << "ClapTrap " << this->_Name << " cannot attack beacause " << RESET << this->_Name<< std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0){
		std::cout << RED << "ClapTrap " << this->_Name << " is dead" << RESET << std::endl;
		return ;
	}

	this->_HitPoints -= amount;

	if (this->_HitPoints <= 0)
		this->_HitPoints = 0;

	std::cout << "ClapTrap " << this->_Name << " received " << amount
	<< " points of damage, it remain " << this->_HitPoints << " HitPoints"  << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{

		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_Name << " receive " << amount
		<< " energy points, now " << this->_Name << " has " << this->_HitPoints 
		<< " hit points" << std::endl;
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
