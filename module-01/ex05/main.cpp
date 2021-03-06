/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:24:37 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/27 11:28:44 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void)
{
	Human bob;

	std::cout << "Bob identify: \t" << bob.identify() << std::endl;
	std::cout << "Brain identify: " << bob.getBrain().identify() << std::endl;
	return (0);
}