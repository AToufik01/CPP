#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include <fstream>
#include <map>
#include <vector>
#define DBFILE "data.csv"
class BitcoinExchange
{
    private:
        std::map<std::string,std::string>myData;
        std::ifstream file;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string &str);
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        void calculebtc(std::string val,std::string rate,std::string date);
        bool validInput(std::string &str);
        void storDataBase();
        void    valueBtc();

        void printDataBase();

};
std::vector<std::string> split(const std::string &str);
#endif

use other container // vector resirved ex02