/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:58:53 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 11:10:27 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal :: AAnimal():type("unknown")
{
    std :: cout <<"Animal : Default constructors called"<<std :: endl;
}

AAnimal :: ~AAnimal()
{
    std :: cout <<"Animal :  Default destructors called"<<std :: endl;
}


std::string AAnimal ::getType()
{
    return(type);
}