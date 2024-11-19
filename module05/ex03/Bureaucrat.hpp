/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:29 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/19 07:56:30 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
class AForm;
class Bureaucrat
{
    private:
        const std::string _name;
        int GradeRange;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(const std::string &name,int grade);
        Bureaucrat&operator=(const Bureaucrat &other);
        ~Bureaucrat();
    
        class GradeTooHighException:public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException:public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        std::string getName() const;
        void signForm(AForm &form);
        int  getGrade() const;
        void executeForm(AForm const & form);
        void incrGrade();// increment the bureaucrat grade
        void decrGrade();// decrement the bureaucrat grade
};
std::ostream &operator<<(std::ostream&str ,const Bureaucrat &ob);


#endif