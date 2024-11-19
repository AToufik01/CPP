/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:19:06 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 09:27:35 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat Buro("hasan",29);
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf->beSigned(Buro);
        rrf->execute(Buro);  
    }
    catch (const std::exception& e)
    {
        std::cerr <<e.what() << std::endl;
    }
    return 0;
}
