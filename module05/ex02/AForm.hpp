/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:20:44 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/18 17:54:07 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
    private:
        const std::string _Name;
        bool _sign;
        const int _GradeSign;
        const int _GradeExecute;
        
    public:
        AForm();
        AForm(const std::string& name,int Gsign ,int Gexecut);
        AForm(const AForm &copy);
        AForm &operator=(const AForm &other);
        ~AForm();
        virtual void execute(Bureaucrat const & executor) const = 0;
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
        void beSigned(const Bureaucrat &bure);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getSign() const;
        
};

std::ostream &operator<<(std::ostream& str,const AForm &ob);
#endif