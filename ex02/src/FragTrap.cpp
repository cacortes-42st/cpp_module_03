/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 19:38:54 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/28 20:30:32 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	
	std::cout << "FragTrap name constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name
			  << " says: High five, guys!" << std::endl;
}