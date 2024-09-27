#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"



class PhoneBook
{
    private:
        int cont;
        Contact tab[8];
    public:
        void    ft_add_contact(void);
        void    ft_search_contact(void);
        void    ft_wrcontact(Contact c, int i);
        void    ft_data_contact(Contact c);

};
int check_input(string input);
int check_input_nbr(string input);
string valid_input(string str,int i);
int    check_valid_index(string input,int cont);
void    ft_head_contact_tab();
#endif