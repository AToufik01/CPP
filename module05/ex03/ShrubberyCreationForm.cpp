/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:20:53 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/18 19:31:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :AForm(target,145,137)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :AForm(copy)
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
    if(!this->getSign())
        throw GradeTooLowException();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooLowException();
    std::string str = this->getName()+ "_shrubbery";
    std::ofstream file(str.c_str());
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