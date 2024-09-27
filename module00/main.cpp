#include <string>

using namespace std;

string f()
{
    string str1 = "asd";
    string str2 = str1;
    return str1;
}

int main()
{
    string str = f();
}