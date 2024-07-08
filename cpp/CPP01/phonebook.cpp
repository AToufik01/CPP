#include"PhoneBook.hpp"

void PhoneBook :: ft_add_contact(void)
{
    Contact new_contat;

    string input;
    cout<<"first name: ";
    getline(cin,input);
    new_contat.setfirstname(input);
    //free input
    cout<<"last name: ";
    getline(cin,input);
    new_contat.setlastname(input);
    //free input
    cout<<"nickname: ";
    getline(cin,input);
    new_contat.setnickname(input);
    //free input
    cout<<"phone number: ";
    getline(cin,input);
    new_contat.setphonenbr(input);
    //free input
    cout<<"derkest : ";
    getline(cin,input);
    new_contat.setderkest(input);
    //free input

    if(cont<8) //intstalize cont cout ==1;
    {
        cont++;
        tab[cont - 1] = new_contat;
    }
    cout << "Contact added successfully ✅" << endl;


}


void PhoneBook :: ft_search_contact(void)
{
    int i;
    i =0;
    cout<<"| index | first name | last name | nickname|"<<endl;
    while (cont>=0)
    {
        ft_wrcontact(tab[cont]);
        cont--;
    }
    
    

}

void  PhoneBook ::ft_wrcontact(Contact c)
{
    cout <<"|  "<<cont<<"   |   "<<cout<<c.getfirstname();
    cout<<"  |   "<< c.getlastname();
    cout<<"   |   "<<c.getnickname()<<"     |"<<endl;
}