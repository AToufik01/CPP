#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include <stack>
class RPN
{
    private:
        std::string _str;
        std::stack<int> _stackrpn;
    public:
        RPN();
        RPN(const std::string &str);
        RPN(const RPN &copy);
        RPN &operator=(const RPN &);
        ~RPN();
        void    resultRpn();
        void  doOperation(const char &token);
};
#endif