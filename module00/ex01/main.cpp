#include"PhoneBook.hpp"

int main()
{
    PhoneBook ph_book;
    string input;
    ph_book.n = 0;
    while (1)
    {
        cout << "entre input : ";
        if(!getline(cin,input))
            break;
        if (input == "ADD")
            ph_book.ft_add_contact();
        else if (input == "SEARCH")
            ph_book.ft_search_contact();
        else if  (input=="EXIT")
            break;
    }
    return 0;
}
