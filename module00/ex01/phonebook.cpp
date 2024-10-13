/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:31:02 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 20:18:29 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_input(std::string input)
{
    int i;
    i = 0;
    if(input[i]=='\0')
        return (1);
    while (input[i])
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')||input[i] == ' ')
            i++;
        else
            return (1);
    }
    return (0);
}

int check_input_nbr(std::string input)
{
    int i;
    i = 0;
    while (input[i])
    {
        if (input[i] >= '0' && input[i] <= '9')
            i++;
        else
            return (1);
    }
    return (0);
}
void PhoneBook:: set_n(int i)
{
    this->_n = i;
    this->cont = i;
}

std::string valid_input(std::string str,int i)
{
    std::string input;
    std::cout << str;
    getline(std::cin,input);
    if (i == 1)
        return(input);
    else if (i == 2)
    {
        while (check_input_nbr(input) == 1)
        {
            std::cout<<"Error\n";
            std::cout<<str;
            getline(std::cin,input);
        }
        return(input);
    }
    while (check_input(input) == 1)
    {
        std::cout<<"Error\n";
        std::cout<< str;
        getline(std::cin,input);
    }
    return (input);
}
void    ft_head_contact_tab()
{
    std::cout <<"\t\t--------------------------------------------------"<<std::endl;
    std::cout <<"\t\t|  index  | first name | last name  | nickname   |"<<std::endl;
    std::cout <<"\t\t--------------------------------------------------"<<std::endl;
}

void PhoneBook:: ft_add_contact(void)
{
    Contact newContact;
    
    newContact.setfirstname(valid_input("first name: ",0));
    newContact.setlastname(valid_input("last name: ",0));
    newContact.setnickname(valid_input("nickname: ",1));
    newContact.setphonenbr(valid_input("phone number: ",2));
    newContact.setderkest(valid_input("derkest : ",1));
    if(this->cont>=8)
    {
        this->tab[this->_n] = newContact;
        this->_n++;
        if(this->_n == 8)
            this->_n = 0;
    }
    if(this->cont<8)
    {
        this->cont++;
        this->tab[this->cont - 1] = newContact;
    }
    std::cout << "Contact added successfully " << std::endl;
}

void PhoneBook::    ft_search_contact(void)
{
    std::string input;
    int n;
    int i;
    i = 0;
    if(this->cont == 0)
    {
        std::cout<<"\033[1;31m" << "No contacts added to the phone book."<< "\033[0m" <<std::endl;
        return ;
    }
    ft_head_contact_tab();
    while(i < this->cont)
    {
        ft_wrcontact(this->tab[i],i);
        i++;
    }
    std::cout <<"\033[1;32m"<<"Enter your index: "<< "\033[0m";
    if(!getline(std::cin, input))
        return ;
    n = check_valid_index(input, cont);
    while(n == -1)
    {
        std::cout <<"\033[1;32m"<<"Enter your index: "<< "\033[0m";
        if(!getline(std::cin, input))
            return ;
        n = check_valid_index(input,cont);
    }
    ft_data_contact(tab[n]);
}
int    check_valid_index(std::string input,int cont)
{
    int n;
    if(input[1]!='\0'|| input[0]>((cont - 1) + 48))
        return (-1);
    n = input[0] - 48;
    return (n);
}


void    check_len_str(std::string str)
{
    if(str.length()>10)
        std::cout<< std::setw(10)<< str.substr(0, 10)<<".";
    else
        std::cout<< std::setw(11)<<str;
}


void  PhoneBook ::ft_wrcontact(Contact c,int i)
{
    std::cout <<"\t\t|    "<< i <<"    | ";
    check_len_str(c.getfirstname());
        std::cout<<"| ";
    check_len_str(c.getlastname());
        std::cout<<"| ";
    check_len_str(c.getnickname());
        std::cout<<"| ";
    std::cout<<std::endl;
}

void  PhoneBook ::ft_data_contact(Contact c)
{
    std::cout << "first name: "<<c.getfirstname()<<std::endl;
    std::cout << "last name: "<< c.getlastname()<<std::endl;
    std::cout << "nickname: "<< c.getnickname()<<std::endl;
    std::cout << "phone number: "<< c.getphonenbr()<<std::endl;
    std::cout << "derkest : "<< c.getderkest()<<std::endl;
}
