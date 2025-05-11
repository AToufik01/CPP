#include "RPN.hpp"

int main(int arc ,char **arv)
{
    if (arc != 2) {
        std::cerr<<"Error : invalid number argument ."<<std::endl;
        return (1);
    }
    std::string str;
    str = arv[1];
    RPN rpn(str);
    rpn.resultRpn();
    return 0;
}