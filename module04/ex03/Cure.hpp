/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:20:10 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 15:21:44 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"
class Cure : public AMateria
{
    private:
        /* data */
    public:
        Cure();
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};




#endif