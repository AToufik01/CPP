/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:20:53 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/18 18:18:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :AForm(target,154,137)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm:: operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        std::cout <<"dd"<<std::endl;
    //     this->_targetS = other._targetS;
    return (*this);
}

void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
    // if(!this->beSigned(executor))
    // {
    //     std::cout << "Form is not signed!" << std::endl;
    //     return;
    // }
    if (executor.getGrade() > this->getGradeExecute())
    {
        std::cout << "Error: Executor's grade is too low!" << std::endl;
        // throw GradeTooLowException();
        return;
    }

    std::ofstream file(this->getName()+ "_shrubbery");
    if (!file.is_open())
    {
        std::cout<<"error"<<std::endl;
        return ;
    }
    file<< "     oxoxoo    ooxoo\n"
        << "   ooxoxo oo  oxoxooo\n"
        << "  oooo xxoxoo ooo ooox\n"
        << "  oxo o oxoxo  xoxxoxo\n"
        << "    oxo xooxoooo o ooo\n"
        << "      ooo\'oo\'  /o/o\n"
        << "          \'  \'/ /\n"
        << "           |   /\n"
        << "           |  |\n"
        << "           | D|\n"
        << "           |  |\n"
        << "           |  |\n"
        << "    ______/____\'____"<<std::endl;

    file.close();
}