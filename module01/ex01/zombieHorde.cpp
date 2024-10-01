/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:16:42 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/30 18:39:22 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    // protectd
    Zombie *zom = new Zombie[N];;
    int i;
    i = 0;
    while (i<N)
    {
        zom[i].setname(name);
        i++;
    }
    return (zom);
}