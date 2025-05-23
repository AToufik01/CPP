/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:42:29 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/02 17:42:29 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    void setname(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif