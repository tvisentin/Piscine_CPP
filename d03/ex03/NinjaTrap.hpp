/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:51:33 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/06 21:52:55 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const & src);

		NinjaTrap&	operator=(NinjaTrap const & rhs);

		void	challengeNewcomer(std::string const & target);

	private:
		NinjaTrap(void);
		void	log(void) const;
		void	initTrap(void);

		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

		unsigned int	_stoneAttackDamage;
		unsigned int	_spoonAttackDamage;
		unsigned int	_chainsawPlasmaDeathMortalAttackDamage;
		unsigned int	_stabInTheBackAttackDamage;
		unsigned int	_kamehamehaAttackDamage;

};

#endif
