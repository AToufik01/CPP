#include "BitcoinExchange.hpp"

int main(int arc,char **arv)
{
    if (arc==1) {
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;
    }
    std::string str = arv[1];
    BitcoinExchange exchange(str);
    exchange.storDataBase();
    // exchange.printDataBase();
    exchange.valueBtc(); //parse data.csv
    return 0;
}