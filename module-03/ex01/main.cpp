/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:24:09 by adorigo          #+#    #+#             */
/*   Updated: 2020/05/02 21:24:09 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	FragTrap frag("FR4G");
	ScavTrap scav("SC4V");

	srand(time(NULL));
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.meleeAttack("CL4P-TP");
	frag.rangedAttack("CL4P-TP");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");
	frag.vaulthunter_dot_exe("CL4P-TP");

	std::cout << "---" << std::endl;

	scav.challengeNewcomer();
	scav.meleeAttack("CL4P-TP");
	scav.rangedAttack("CL4P-TP");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(42);
	scav.takeDamage(100);
	scav.beRepaired(125);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	return (0);
}