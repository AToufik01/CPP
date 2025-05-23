/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:32:50 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/06 18:41:13 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
class DiamondTrap :public ScavTrap ,public FragTrap
{
    private:
        std::string _Name; 
    public:
        // DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();
};

#endif