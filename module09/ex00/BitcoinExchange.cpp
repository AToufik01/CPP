#include "BitcoinExchange.hpp"

BitcoinExchange:: BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const std::string &str) {
    this->file.open(str);
    if (!this->file.is_open()) {
        std::cout<<"Error: file not open " <<std::endl;
        exit(1);
    }

}

BitcoinExchange::  BitcoinExchange(const BitcoinExchange &copy) {
    *this = copy;
}

BitcoinExchange &BitcoinExchange:: operator=(const BitcoinExchange &other) {
    if (this != &other) {
        this->myData = other.myData;
    }
    return *this;
}

BitcoinExchange:: ~BitcoinExchange() {

}
void    BitcoinExchange::storDataBase()
{
    std::ifstream dB(DBFILE);
    std::string line;
    getline(dB, line);
    while (getline(dB, line)) {
        std::string key;
        std::string val;
        size_t pos = line.find(",");
        if (pos!=std::string::npos) {
            key = line.substr(0, pos);
            val = line.substr(pos + 1);
        }

        this->myData[key] = val;
    }
    dB.close();
}

std::vector<std::string> split(const std::string &str) {
  std::vector<std::string> words;
  size_t i = 0, j;
  while (i < str.length()) {
    if ((j = str.find_first_of("-", i)) != std::string::npos) {
      if (j > i)
        words.push_back(str.substr(i, j - i));
      i = j + 1;
    } else {
      words.push_back(str.substr(i));
      break;
    }
  }
  return (words);
}
bool BitcoinExchange::validInput(std::string &str)
{
    int day;
    int month;
    int year;
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]) && str[i] != '-')
            return false;
    }
   std::vector<std::string> words = split(str);
   if (words[0].length()!=4 || words[1].length()!=2 ||words[2].length()!=2) {
        return false;
   }
    day = atoi(words[2].c_str());
    month = atoi(words[1].c_str());
    year = atoi(words[0].c_str());
    if (day > 31 || month > 12 || (month == 2 && day > 28) || day == 0)
        return false;
    
    return true;
}
bool validValue(std::string &value)
{
    size_t i = 0;
    int dot = 0;
    if (value[i]=='-'|| value[i]=='+')
        i++;
    while(i < value.length()) {
        if (value[i] == '.') {
               dot++;
            if (dot>1) {
                return false;
            }
        } else if (!isdigit(value[i])) {
            return false;
        }
        i++;
    }
    return true;
}
void  BitcoinExchange:: calculebtc(std::string val,std::string rate,std::string date)
{
    if (validValue(val) == false) {
        std::cout<<"Error: not a valid number."<<std::endl;
        return ;
    }
    float value = atof(val.c_str());
    float vrate = atof(rate.c_str());
    if (value >1000) {
        std::cout<<"Error: too large a number."<<std::endl;
        return ;
    }
    if (value<0) {
        std::cout<<"Error: not a positive number."<<std::endl;
        return ;
    }
    std::cout <<date<<" => "<<val<<" = "<<value * vrate<<std::endl;
}
void BitcoinExchange:: valueBtc()
{
    std::string line;
    std::string valuExchange;
    getline(this->file, line);
    while (getline(this->file, line)) {
        std::string key;
        std::string val;
        size_t pos = line.find("|");

        if (pos != std::string::npos) {
            if (line[pos - 1] != ' ' || line[pos + 1] != ' ') {
                std::cerr<<"Error :Format line, missing space around |"<<std::endl;
                continue;
            } else {
                key = line.substr(0, pos - 1);
                val = line.substr(pos + 2);
            }
        }
        else {
            std::cerr<<"Error: bad input => "<<line<<std::endl;
            continue;
        }
        if (validInput(key)==true) {
            if (this->myData.find(key)!=this->myData.end()) {
                calculebtc(val,this->myData[key],key); 
            } else {
                std::map<std::string,std::string>::iterator it = this->myData.upper_bound(key);
                if (it == this->myData.end())
                    std::cout<<"value btc not found in date "<<key<<std::endl;
                else if (it !=this->myData.begin()) {
                    --it;
                    calculebtc(val,it->second,it->first);
                } 
                else
                    std::cout<<"value btc not found in date "<<key<<std::endl;
            }
        } else {
            std::cerr<<"Error: bad input => "<<key<<std::endl;
        }
    }
    this->file.close();
}




void BitcoinExchange::printDataBase()
{
    std::map<std::string,std::string>::iterator it =this->myData.begin();
    while (it!=this->myData.end())
    {
        std::cout <<" "<<it->first<<std::endl;
        it++;
    }
    

}