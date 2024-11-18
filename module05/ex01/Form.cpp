/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:19:15 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/17 17:27:58 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :_Name("unknown"),_GradeSign(0),_GradeExecute(0)
{
    
}

Form::Form(const Form &copy) :_Name(copy._Name),_sign(copy._sign),_GradeSign(copy._GradeSign),_GradeExecute(copy._GradeExecute)
{

}

Form &Form:: operator=(const Form &other)
{
    if (this != &other)
        this->_sign = other._sign;
    return (*this);
}

Form:: ~Form()
{

}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("the grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("the grade is too low");
}

bool Form:: getSign() const
{
    return (this->_sign);
}

std::string Form:: getName() const
{
    return(this->_Name);
}

int Form:: getGradeSign() const
{
    return (this->_GradeSign);
}

int Form:: getGradeExecute() const
{
    return (this->_GradeExecute);
}

void Form:: beSigned(Bureaucrat &bure)
{
    if (bure.getGrade() > this->_GradeSign)
        throw GradeTooHighException();
    this->_sign = true;

}

std::ostream &operator<<(std::ostream& str,const Form &ob)
{
    str << "Name : "<<ob.getName();
    str<<"Is signed " <<ob.getSign();
    str<<"Required Grade to Sign: "<<ob.getGradeSign();
    str<<"Required Grade to Execute: "<<ob.getGradeExecute();
    return(str);
}
