/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:27:09 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 10:04:13 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std:: cout <<"Dog : Default constructors called "<< std ::endl;
}
Dog :: Dog(const Dog &copy)
{
    this->brain = new Brain();
    std:: cout <<"Dog : copy constructors called "<< std ::endl;
    *this = copy;
}
Dog :: ~Dog()
{
    delete(this->brain);
    std:: cout <<"Dog :  Default destructors called"<<std :: endl;
}

void    Dog:: makeSound()
{
    std::cout << "Bark" << std::endl;
}