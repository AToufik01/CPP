/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:31:37 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/18 17:12:13 by ataoufik         ###   ########.fr       */
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
    (void)executor;
}