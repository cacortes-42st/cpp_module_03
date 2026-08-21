/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:56:04 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/31 11:15:45 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n===== BASIC TEST =====" << std::endl;
	
	ClapTrap d("david");

	d.attack("Bob");
	d.takeDamage(5);
	d.beRepaired(3);


	std::cout << "\n===== ENERGY TEST =====" << std::endl;

	ClapTrap e("energy");

	for(int i = 0; i < 10; i++)
		e.attack("dummy");

	e.attack("dummy");
	e.beRepaired(5);


	std::cout << "\n===== DEATH TEST =====" << std::endl;

	ClapTrap z("zombie");

	z.takeDamage(10);

	z.attack("player");
	z.beRepaired(5);
	z.takeDamage(1);
	
	return (0);
}