/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:27:34 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/07 15:38:06 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat()
{
    this->type = "Cat";
    std:: cout <<"Cat : Default constructors called "<< std ::endl;
}

Cat :: ~Cat()
{
    std:: cout <<"Cat :  Default destructors called"<<std :: endl;
}

void    Cat:: makeSound()
{
    std::cout << "Meow" << std::endl;
}
