#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<string>
#include<iostream>
using namespace std;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_nbr;
        string derkset;
    public:
        void setfirstname(string str);
        void setlastname(string str);
        void setnickname(string str);
        void setphonenbr(string str);
        void setderkest(string str);



        string getfirstname(void);
        string getlastname(void);
        string getnickname(void);
        string getphonenbr(void);
        string getderkest(void);


};



#endif