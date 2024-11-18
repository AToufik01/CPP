/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:35:27 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/18 17:52:17 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :_Name("unknown"),_GradeSign(0),_GradeExecute(0)
{
    
}

AForm::AForm(const std::string& name,int Gsign ,int Gexecut):_Name(name) ,_GradeSign(Gsign),_GradeExecute(Gexecut)
{

}

AForm::AForm(const AForm &copy) :_Name(copy._Name),_sign(copy._sign),_GradeSign(copy._GradeSign),_GradeExecute(copy._GradeExecute)
{

}

AForm &AForm:: operator=(const AForm &other)
{
    if (this != &other)
        this->_sign = other._sign;
    return (*this);
}

AForm:: ~AForm()
{

}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("the grade is too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("the grade is too low");
}

bool AForm:: getSign() const
{
    return (this->_sign);
}

std::string AForm:: getName() const
{
    return(this->_Name);
}

int AForm:: getGradeSign() const
{
    return (this->_GradeSign);
}

int AForm:: getGradeExecute() const
{
    return (this->_GradeExecute);
}

void AForm:: beSigned(const Bureaucrat &bure)
{
    if (bure.getGrade() > this->_GradeSign)
        throw GradeTooHighException();
    this->_sign = true;
}

std::ostream &operator<<(std::ostream& str,const AForm &ob)
{
    str << "Name : "<<ob.getName();
    str<<"Is signed " <<ob.getSign();
    str<<"Required Grade to Sign: "<<ob.getGradeSign();
    str<<"Required Grade to Execute: "<<ob.getGradeExecute();
    return(str);
}
