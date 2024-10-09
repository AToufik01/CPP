/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:49:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 16:06:29 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource :: MateriaSource()
{
    std::cout << "Cure : Default Constructor called"<<std::endl;
}

MateriaSource :: ~MateriaSource()
{
    std::cout << "Cure : Default destructor called"<<std::endl;
}

void MateriaSource :: learnMateria(AMateria*m)
{
    if (!m)
        return;
        for (int i = 0; i < 4; i++)
        {
            if (!materias[i])
            {
                materias[i] = m->clone(); 
                std::cout << "Learned new Materia!" << std::endl;
                return;
            }
        }
}

AMateria*MateriaSource ::  createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone(); 
    }
    return nullptr;
}