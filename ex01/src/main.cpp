/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:10:34 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/26 12:42:49 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n===== CLAPTRAP TEST =====" << std::endl;
	
	ClapTrap d("david");

	d.attack("Bob");
	d.takeDamage(5);
	d.beRepaired(3);

	std::cout << "\n===== SCAVTRAP TEST =====" << std::endl;
	
	ScavTrap s("sac");

	s.attack("Boby");
	s.takeDamage(5);
	s.beRepaired(3);


	std::cout << "\n===== SCAVTRAP ENERGY TEST =====" << std::endl;

	ScavTrap c("energy");

	for(int i = 0; i < 50; i++)
		c.attack("dummy");

	c.attack("dummy");
	c.beRepaired(5);


	std::cout << "\n===== SCAVTRAP DEATH TEST =====" << std::endl;

	ScavTrap z("zombie");

	z.takeDamage(100);

	z.attack("player");
	z.beRepaired(5);
	z.takeDamage(1);


	std::cout << "\n===== GATE KEEPER TEST =====" << std::endl;

	ScavTrap g("Guard");

	g.guardGate();
	
	return (0);
}