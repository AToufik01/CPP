/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:27:34 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 09:57:21 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std:: cout <<"Cat : Default constructors called "<< std ::endl;
}
Cat :: Cat(const Cat &copy)
{
    this->brain = new Brain();
    std::cout <<"Cat : copy constructors called"<<std::endl;
    *this=copy;
}
Cat :: ~Cat()
{
    delete(this->brain);
    std:: cout <<"Cat :  Default destructors called"<<std :: endl;
}

void    Cat:: makeSound()
{
    std::cout << "Meow" << std::endl;
}
