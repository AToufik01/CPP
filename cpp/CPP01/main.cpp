#include"PhoneBook.hpp"

int main()
{
    PhoneBook ph_book;
    string input;
    while (1)
    {
        cout << "entre input : ";
        getline(cin,input);
        if(input.empty())
            break;
        if (input=="ADD")
            ph_book.ft_add_contact();
        else if (input=="SEARCH")
            ph_book.ft_search_contact();
        else if  (input=="EXIT")
            break;
        else
            cout<<"invalid args"<<endl;
        
            // cout<< "search contact -- "<<endl;
            // cout<<"add contact  --"<<endl;
    }

    cout<<"haaaaa nta gadi";
    
    return 0;
}
