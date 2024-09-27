#include<iostream>

using namespace std;

void ft_uprcase(char **str, int count)
{
    int i = 1;
    while (i < count)
    {
        int j = 0;
        while (str[i][j])
        {
            if (str[i][j] >= 'a' && str[i][j] <= 'z')
                cout << char (str[i][j] - 32); 
            else
                cout << str[i][j];
            j++;
        }
        if (i < count - 1)
            cout << ' ';
        i++;
    }
    cout << endl;
}


int main(int arc ,char *arv[])
{
    if (arc == 1)
        cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<endl;
    else
       ft_uprcase(arv, arc);
    return (0);
}