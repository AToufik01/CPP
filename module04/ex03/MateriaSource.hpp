/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:49:49 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 16:03:30 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
    private:
        AMateria* materias[4];
    public:
        MateriaSource(/* args */);
        ~MateriaSource();
        void learnMateria(AMateria*m);
        AMateria* createMateria(std::string const & type);
};


#endif