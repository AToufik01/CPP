#include "PhoneBook.hpp"


void Contact :: setfirstname(string str)
{
    first_name = str;
}

void Contact :: setlastname(string str)
{
    last_name = str;
}
void Contact :: setnickname(string str)
{
    nickname = str;
}
void Contact :: setphonenbr(string str)
{
    phone_nbr = str;
}
void Contact :: setderkest(string str)
{
    derkset = str;
}



string Contact :: getfirstname(void)
{
    return(first_name);
}
string Contact :: getlastname(void)
{
    return(last_name);
}
string Contact :: getnickname(void)
{
    return(nickname);
}
string Contact :: getphonenbr(void)
{
    return(phone_nbr);
}
string Contact :: getderkest(void)
{
    return(derkset);
}
