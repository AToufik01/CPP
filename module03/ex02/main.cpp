/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:41:55 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 22:28:03 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag1("hasan");

    frag1.attack("clone");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.highFivesGuys();

    return 0;
}
