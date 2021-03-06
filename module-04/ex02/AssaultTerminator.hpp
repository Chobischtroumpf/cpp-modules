/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/06 08:49:10 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"
class AssaultTerminator: public ISpaceMarine
{
	public:
		// Constructors
		AssaultTerminator ();
		AssaultTerminator (const AssaultTerminator &source);
		virtual ~AssaultTerminator ();

		// Operators
		AssaultTerminator &operator = (const AssaultTerminator &source);

		// Utils
		ISpaceMarine *clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;

};

# endif
