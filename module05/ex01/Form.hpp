/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:12:11 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/17 17:27:20 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string _Name;
        bool _sign;
        const int _GradeSign;
        const int _GradeExecute;
        
    public:
        Form();
        Form(const Form &copy);
        Form(const std::string &name,int gardsing,int gardexecute);
        Form &operator=(const Form &other);
        ~Form();
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
        void beSigned(Bureaucrat &bure);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getSign() const;
        
};
std::ostream &operator<<(std::ostream& str,const Form &ob);

#endif