/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:31:37 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 07:55:01 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):AForm(target,72,45)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(this != &other)
        std::cout<<"dd"<<std::endl;
    //     this->_targetR = other._targetR;
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSign())
        throw GradeTooLowException();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooLowException();
        
    if (/* */1)
        std::cout << this->getName() <<" has been robotomized successfully 50%' of the time"<<std::endl;
    else
        std::cout << "the robotomy failed."<<std::endl;
}