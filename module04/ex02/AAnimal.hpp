/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:59:12 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 11:10:38 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
class AAnimal
{
    protected:
       std::string type;
    public:
        AAnimal();
        virtual ~AAnimal();
        virtual void makeSound() = 0;
        std::string getType();
};

#endif