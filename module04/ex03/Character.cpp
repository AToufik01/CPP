/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:40 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 19:29:14 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character :: Character()
{
    std:: cout<<"Character : Default constructor called"<<std::endl;
}

Character :: Character(std::string type):name(type)
{
    std::cout << "Character of type " << name << " has been created." << std::endl;
}
Character :: ~Character()
{
    std:: cout<<"Character : Default destructor called"<<std::endl;
}


void Character :: equip(AMateria* m)
{
    if (m == nullptr)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            std::cout << name << " equipped Materia in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "Inventory is full! Cannot equip more Materias." << std::endl;
}

void Character ::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
    {
        inventory[idx] = nullptr; // Just remove the reference, do not delete Materia
        std::cout << name << " unequipped Materia from slot " << idx << std::endl;
    }
    else
    {
        std::cout << "Invalid slot or no Materia to unequip at index " << idx << std::endl;
    }
}

void Character :: use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
        inventory[idx]->use(target); // Call use on the Materia in the slot
    else
        std::cout << "No Materia in slot " << idx << " to use." << std::endl;
}
std::string const & Character :: getName() const
{
    return (this->name);
}