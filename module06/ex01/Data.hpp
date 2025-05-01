/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:27:40 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 19:15:42 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include<iostream>

class Data
{
    private:
        std::string _name;
        int _id;
    public:
        Data(std::string name,int id);
        Data();
        Data(const Data&copy);
        Data& operator=(const Data&other);
        ~Data();
        std::string getName() const;
        void setName(std::string name);
        int getId() const;
        void setId(int id);    
};


#endif