/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:44:47 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/31 12:03:53 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	
	std::cout << "ScavTrap name constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name
				  << " attacks " << target
				  << ", causing " << this->attack_damage
				  << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->name
				  << " doesn`t have enough points to attack." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name
			  << " has changed its mode to guard keeper." << std::endl;
}