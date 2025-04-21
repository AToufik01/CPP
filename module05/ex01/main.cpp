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
        Bureaucrat bob("Bob", 1);
        Form form("Cmedical",10,30);
        form.beSigned(bob);
        // bob.incrGrade();
        // bob.incrGrade();
        std::cout << bob <<std::endl;
        std::cout << form <<std::endl;
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}