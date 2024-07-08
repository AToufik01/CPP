#include <iostream>
#include <string>

// void appercase(char *str)
// {
//     int i;
//     i = 0;
//     while (str[i])
//     {
//         if(str[i]>='a' && str[i]<='z')
//             std::cout << str[i]; 
//       i++;
//     }
// }
int main(int arc ,char **arv)
{
    // int number=0b01;
    // appercase(arv[1]);
    // std::string welcome_ms{"holaaaa ks,azd,azd adz"};
    // std::cerr << "hello world " << "qqqqqq qqqqqqq\n" << "eeeee eeeee";
    // std::cout << welcome_ms << std::endl;
    int f;
    std::cout<< "dakhel nbr  : ";
    std::cin >> f;
    std::cout << "ha---> "<< f<<std::endl;

    std::cout << "dakhell smya  : ";
    std::cin >> std::ws;
    std::string n;
    // std::cin >> n;
    std::getline(std::cin,n);
    std::cout << "----> " << n << std::endl;

    return 0;
}
/*
std::cout :affichage stdandard (en memoire tampon)
std::cerr :errures (affichage direct)
std::clog :journalisation (en memoire tampon)

std::endl retour a la ligne + flush

*/