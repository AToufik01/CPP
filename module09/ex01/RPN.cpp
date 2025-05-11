#include "RPN.hpp"


RPN::RPN()
{

}
RPN::RPN(const std::string &str) :_str(str)
{

}
RPN::~RPN()
{

}
RPN::RPN(const RPN &copy)
{
    *this = copy;
}
RPN &RPN::operator=(const RPN &)
{
    return (*this);
}
void  RPN::doOperation(const char &token)
{
    int fisrtNumber;
    int secandNumber;
    if (this->_stackrpn.size() < 2) {
        std::cerr<<"Error"<<std::endl;
        exit(0);
    }
    fisrtNumber = this->_stackrpn.top();
    this->_stackrpn.pop();
    secandNumber = this->_stackrpn.top();
    this->_stackrpn.pop();
    if (token =='+') {
        this->_stackrpn.push(secandNumber + fisrtNumber);
    } else if (token =='-') {
        this->_stackrpn.push(secandNumber - fisrtNumber);
    } else if (token =='*') {
        this->_stackrpn.push(secandNumber * fisrtNumber);
    } else if (token =='/') {
        this->_stackrpn.push(secandNumber / fisrtNumber);
    } else {
        std::cerr<<"Error"<<std::endl;
        exit(0);
    }
}
void RPN::resultRpn()
{
    size_t i = 0;
    while (i <this->_str.length()) {
        if (this->_str[i]==' ') {
            i++;
            continue;
        } else {
            if (isdigit(this->_str[i]) && this->_str[i+1]==' ') {
                int value = this->_str[i] - '0';
                this->_stackrpn.push(value);
            } else {
                doOperation(this->_str[i]);
            }
        }
        i++;
    }
    if (this->_stackrpn.size()==1) 
    {
        std::cout <<this->_stackrpn.top()<<std::endl;
    }  else {
        std::cerr<<"Error"<<std::endl;
        exit(0);
    }
}