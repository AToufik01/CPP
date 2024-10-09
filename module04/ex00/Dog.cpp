/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:27:09 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/07 15:35:27 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
    this->type = "Dog";
    std:: cout <<"Dog : Default constructors called "<< std ::endl;
}

Dog :: ~Dog()
{
    std:: cout <<"Dog :  Default destructors called"<<std :: endl;
}

void    Dog:: makeSound()
{
    std::cout << "Bark" << std::endl;
}