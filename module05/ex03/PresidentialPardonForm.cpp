/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:40:47 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 07:34:06 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):AForm(target,25,5)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :AForm(copy)
{
    *this = copy;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if(this != &other)
        std::cout<<"dd"<<std::endl;
    //     this->_targetP = other._targetP;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSign())
        throw GradeTooLowException();
    if (executor.getGrade() > this->getGradeExecute())
        throw GradeTooLowException();
    std::cout <<this->getName()<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
}
