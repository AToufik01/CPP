/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:19:06 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 08:39:09 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try {

        Bureaucrat buro("hasan",4);
        ShrubberyCreationForm d("home");
        RobotomyRequestForm f("ayoub");
        PresidentialPardonForm e("fr");
        d.beSigned(buro);
        // buro.executeForm(e);
        // f.execute(buro);
        d.execute(buro);
        // std::cout <<"lalalalalalalalal\n";
    } catch (const AForm::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
