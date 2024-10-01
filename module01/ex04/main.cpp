/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:14:07 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/01 21:54:53 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_line.hpp"

int main(int arc, char *arv[])
{
   string myText;
    if (arc !=4)
    {
        cerr << "Error inputs "<< endl;
        return (1);
    }
    if (arv[2]=='\0' || arv[3]=='\0')
        return 1;
   ifstream MyReadFile(arv[1]);
    if (!MyReadFile.is_open())
    {
       cerr << "Error: Could not open the file!" <<endl;
        return (1); 
    }
    string str = arv[1];
    str +=".replace";

    ofstream MyFile(str);
    if (!MyFile.is_open())
    {
        cerr << "Error: Could not create the file: " << str << endl;
        return 1;
    }
    while (getline(MyReadFile,myText))
        MyFile << check_line_and_replace(myText,arv[2],arv[3]);

    MyReadFile.close();
    MyFile.close();
    return 0;
}
