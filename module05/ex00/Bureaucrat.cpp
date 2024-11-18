/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:05:46 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/17 17:25:58 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat(const std::string &name,int grade):_name(name),GradeRange(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat ::Bureaucrat() :_name("unknown"),GradeRange()
{

}
Bureaucrat ::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat ::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->GradeRange = other.GradeRange;
    return (*this);
}


Bureaucrat ::~Bureaucrat()
{

}

const char* Bureaucrat ::GradeTooHighException::what() const throw()
{
    return ("the grade is too High");
}
const char* Bureaucrat ::GradeTooLowException::what() const throw()
{
    return ("the grade is too low");
}
std::string  Bureaucrat::getName() const
{
    return (this->_name);
}

int  Bureaucrat::getGrade() const
{
    return (this->GradeRange);
}

void Bureaucrat::incrGrade()
{
    if (this->GradeRange - 1 < 1)
        throw GradeTooHighException();
    this->GradeRange--;
}

void Bureaucrat::decrGrade()
{
    if (this->GradeRange + 1 > 150)
        throw GradeTooLowException();
    this->GradeRange++;
}
std::ostream &operator<<(std::ostream&str ,const Bureaucrat &o)
{
    return(str<<o.getName()<<", bureaucrat grade "<<o.getGrade()<<".");
}