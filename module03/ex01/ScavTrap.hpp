/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:19:11 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 20:47:44 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);

};


#endif