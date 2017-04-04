/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:47:13 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 14:17:35 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::zombiesName[20] = {"Bill", "Zoey", "Francis", "Louis", "Nick", "Coach", "Ellis", "Rochelle", "Tank", "Boomer", "Smoker", "Witch", "Hunter", "Jockey", "Charger", "Spitter", "Common Infected", "Witch crys", "Screamer", "Uncommon Infected"};

ZombieHorde::ZombieHorde(int n) : nbHorde(n) {
    this->zombieHorde = new Zombie[20];

	srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        this->zombieHorde[i].name = zombiesName[rand() % 20];
    }
    return;
}

ZombieHorde::~ZombieHorde(void) {
    delete [] this->zombieHorde;
    std::cout << "ZombieHorde is destroyed" << std::endl;
    return;
}

void    ZombieHorde::ZombieHordeAnnounce(void) {
    for (int i = 0; i < 20; i++) {
        this->zombieHorde[i].announce();
    }
}
