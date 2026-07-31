/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:44:42 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/31 12:06:17 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "\n===== CLAPTRAP TEST =====" << std::endl;
	
	ClapTrap d("david");

	d.attack("Bob");
	d.takeDamage(5);
	d.beRepaired(3);

	std::cout << "\n===== FRAGTRAP TEST =====" << std::endl;
	
	FragTrap s("sac");

	s.attack("Boby");
	s.takeDamage(5);
	s.beRepaired(3);


	std::cout << "\n===== FRAGTRAP ENERGY TEST =====" << std::endl;

	FragTrap c("energy");

	for(int i = 0; i < 50; i++)
		c.attack("dummy");

	c.attack("dummy");
	c.beRepaired(5);


	std::cout << "\n===== FRAGTRAP DEATH TEST =====" << std::endl;

	FragTrap z("zombie");

	z.takeDamage(100);

	z.attack("player");
	z.beRepaired(5);
	z.takeDamage(1);


	std::cout << "\n===== HIGH FIVE TEST =====" << std::endl;

	FragTrap g("Dude");

	g.highFivesGuys();
	
	return (0);
}