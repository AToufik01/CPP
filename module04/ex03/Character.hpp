/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:24 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 16:09:23 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4]; 
    public:
        Character();
        Character(std::string type);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m)override;
        void unequip(int idx) ;
        void use(int idx, ICharacter& target) ;
};

#endif