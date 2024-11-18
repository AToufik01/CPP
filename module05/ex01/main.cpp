/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:39:23 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/16 18:19:18 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bob("Bob", 149);
        bob.incrGrade();
        bob.incrGrade();
        std::cout << bob <<std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("Bob", 1);
        bob.decrGrade();
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}