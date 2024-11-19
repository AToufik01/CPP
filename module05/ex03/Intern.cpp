/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:42:50 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 09:25:55 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

AForm *Intern::makeForm(std::string nameform,std::string target)
{
    std::string str[] = {"shrubbery creation","robotomy request","presidential pardon"};
    int i = 0;
    while(i < 3 && str[i] != nameform)
        i++;
    switch (i)
    {
        case 0:
            return new ShrubberyCreationForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new PresidentialPardonForm(target);
        default:
            throw std::invalid_argument("Error: Form with name \"" + nameform + "\" does not exist!");
    }
    return NULL;
}