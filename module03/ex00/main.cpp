/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:59:26 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 15:42:27 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("Mohamed");
    std::cout << "Initial state:\n";
    std::cout << "\nSimulating attacks:\n";
    for (int i = 0; i < 5; i++)
        c.attack("clone");
    std::cout << "\nSimulating taking damage:\n";
    c.takeDamage(5);
    std::cout << "\nSimulating repair:\n";
    c.beRepaired(4); 
    std::cout << "\nSimulating more attacks after repair:\n";
    for (int i = 0; i < 9; i++)
        c.attack("clone");
    return 0;
}
