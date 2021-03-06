/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 17:51:17 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

// Contructors /////////////////////////////////////////////////////////////////

RadScorpion::RadScorpion()
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &source)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

RadScorpion &RadScorpion::operator=(RadScorpion const &source)
{
	this->type = source.type;
	this->hp = source.hp;
	return (*this);
}
