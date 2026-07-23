/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:55:51 by cacortes          #+#    #+#             */
/*   Updated: 2026/07/23 13:55:38 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class	ClapTrap
{
	private:
		char	*name;
		int		hit_points;
		int		enery_points;
		int		attack_damage;
	public:
		ClapTrap(int hit_points, int enery_points, int attack_damage)
			: hit_points(10), enery_points(10), attack_damage(0)
		{
		}

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif