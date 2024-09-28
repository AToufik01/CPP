#include"PhoneBook.hpp"

int check_input(string input)
{
    int i;
    i = 0;
    if(input[i]=='\0')
        return (1);
    while (input[i])
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
            i++;
        else
            return (1);
    }
    return (0);
}

int check_input_nbr(string input)
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
string valid_input(string str,int i)
{
    string input;
    cout << str;
    getline(cin,input);
    if (i == 1)
        return(input);
    else if (i == 2)
    {
        while (check_input_nbr(input) == 1)
        {
            cout<<"Error\n";
            cout<<str;
            getline(cin,input);
        }
        return(input);
    }
    while (check_input(input) == 1)
    {
        cout<<"Error\n";
        cout<< str;
        getline(cin,input);
    }
    return (input);
}
void PhoneBook :: ft_add_contact(void)
{
    Contact new_contat;
    new_contat.setfirstname(valid_input("first name: ",0));
    new_contat.setlastname(valid_input("last name: ",0));
    new_contat.setnickname(valid_input("nickname: ",1));
    new_contat.setphonenbr(valid_input("phone number: ",2));
    new_contat.setderkest(valid_input("derkest : ",1));

    cout <<"------"<<cont<<endl;
    if(cont>=8)
    {
        tab[n] = new_contat;
        n++;
        if(n == 8)
            n = 0;
    }
    if(cont<8)
    {
        cont++;
        tab[cont - 1] = new_contat;
    }
    cout << "Contact added successfully ✅" << endl;


}
int    check_valid_index(string input,int cont)
{
    int n;
    if(input[1]!='\0'|| input[0]>((cont - 1) + 48))
        return (-1);
    n = input[0] - 48;
    return (n);
}

void    ft_head_contact_tab()
{
    cout <<"\t\t--------------------------------------------------"<<endl;
    cout <<"\t\t|  index  | first name | last name  | nickname   |"<<endl;
    cout <<"\t\t--------------------------------------------------"<<endl;
}
void PhoneBook :: ft_search_contact(void)
{
    int i;
    i = 0;
    ft_head_contact_tab();
    while (i<cont)
    {
        ft_wrcontact(tab[i],i);
        i++;
    }
    string input;
    int n;
    cout <<"\033[1;32m"<<"Enter your index: "<< "\033[0m";
    getline(cin,input);
    n = check_valid_index(input,cont);
    if(n==-1)
        return ;
    ft_data_contact(tab[n]);
}

void    check_len_str(string str)
{
    if(str.length()>10)
        cout<< str.substr(0, 10)<<".";
    else
        cout<<str;
}
void  PhoneBook ::ft_wrcontact(Contact c,int i)
{
    cout <<"\t\t|    "<< i <<"    | ";
    check_len_str(c.getfirstname());
    if (c.getfirstname().length()>10)
        cout<<"| ";
    else
    {
        int i = c.getfirstname().length();
        while (i<11)
        {cout<<" ";
            i++;
        }
        cout<<"| ";
    }
    check_len_str(c.getlastname());
    if (c.getlastname().length()>10)
        cout<<"| ";
    else
    {
        int i = c.getlastname().length();
        while (i<11)
        {
            cout<<" ";
            i++;
        }
        cout<<"| ";
    }
    check_len_str(c.getnickname());
    if (c.getnickname().length()>10)
        cout<<"| ";
    else
    {
        int i = c.getnickname().length();
        while (i<11)
        {
            cout<<" ";
            i++;
        }
        cout<<"|";

    }
    cout<<endl;
}
void  PhoneBook ::ft_data_contact(Contact c)
{
    cout << "first name: "<<c.getfirstname()<<endl;
    cout << "last name: "<< c.getlastname()<<endl;
    cout << "nickname: "<< c.getnickname()<<endl;
    cout << "phone number: "<< c.getphonenbr()<<endl;
    cout << "derkest : "<< c.getderkest()<<endl;
}