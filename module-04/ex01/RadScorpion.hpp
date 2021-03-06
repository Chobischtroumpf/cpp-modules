/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 17:52:26 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	// Constructors
	RadScorpion ();
	RadScorpion (const RadScorpion &source);
	virtual ~RadScorpion ();

	// Operators
	RadScorpion &operator = (const RadScorpion &source);

	using Enemy::takeDamage;
};

# endif
