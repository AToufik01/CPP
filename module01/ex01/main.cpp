/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:20:40 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/30 18:39:56 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = zombieHorde(10,"hasan");
    int i;
    i = 0;
    while(i<10)
    {
        z[i].announce();
        i++;
    }
    delete[] z;
    return 0;
}