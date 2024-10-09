/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:21:07 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 14:20:15 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice:public AMateria
{
    private:
        /* data */
    public:
        Ice(/* args */);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};



#endif