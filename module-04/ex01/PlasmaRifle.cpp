/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 17:00:06 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Contructors /////////////////////////////////////////////////////////////////

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &source):
	AWeapon(source)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

// Operators ///////////////////////////////////////////////////////////////////

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &source)
{
	std::cout << "Assignations operator for PlasmaRifle called" << std::endl;
	this->name =  source.name;
	this->apCost = source.apCost;
	this->damage = source.damage;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}