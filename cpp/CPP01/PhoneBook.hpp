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
        void    ft_wrcontact(Contact c);


};

#endif