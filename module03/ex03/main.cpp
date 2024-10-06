/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:56:57 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/06 18:43:06 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

int main()
{
    DiamondTrap dt1("DiamondOne");
    DiamondTrap dt2("DiamondTwo");
    std::cout << "Testing whoAmI() for dt1:" << std::endl;
    dt1.whoAmI();

    std::cout << "\nTesting whoAmI() for dt2:" << std::endl;
    dt2.whoAmI();
    std::cout << "\nTesting attacks:" << std::endl;
    dt1.attack("EnemyA"); 
    dt2.attack("EnemyB"); 
    std::cout << "\nTesting energy and health management:" << std::endl;
    dt1.takeDamage(30); 
    dt1.beRepaired(20);
    dt2.takeDamage(50);
    dt2.beRepaired(10);

    return (0);
}