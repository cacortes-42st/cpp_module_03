/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:10:28 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/31 11:47:49 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name(""), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap name constructor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name
				  << " attacks " << target
				  << ", causing " << this->attack_damage
				  << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name
				  << " doesn`t have enough points to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name
		          << "... is already dead.\n";
		return ;
	}
	if (amount >= hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name
			  << " takes damage, takes " << amount
			  << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		this->hit_points += amount;
		this->energy_points--;
		std::cout << "ClapTrap " << this->name
				  << " repairs itself, recovering " << amount
				  << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name
				  << " doesn`t have enough points to repair itself." << std::endl;
}
