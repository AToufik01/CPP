/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:39:23 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/16 12:23:28 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bob("Bob", 3);
        bob.decrGrade();
        bob.decrGrade();
        std::cout << bob <<std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat tot("Tot", 120);
        tot.incrGrade();
        std::cout << tot <<std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}