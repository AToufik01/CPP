/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:16:36 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 20:52:14 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



int main()
{
    ScavTrap scav("Mohamed");
    std::cout << "Initial state:\n";
    std::cout << "\nSimulating attacks:\n";
    scav.guardGate();
    for (int i = 0; i < 10; i++)
        scav.attack("clone");
    std::cout << "\nSimulating taking damage:\n";
    scav.takeDamage(50);
    scav.guardGate();
    std::cout << "\nSimulating repair:\n";
    scav.beRepaired(40); 
    std::cout << "\nSimulating more attacks after repair:\n";
    for (int i = 0; i < 9; i++)
        scav.attack("clone");
    return 0;
}