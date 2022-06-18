
#include <iostream>
#include <string.h>
using namespace std;

class Mystring
{

public:
    char str[50];
    Mystring()
    {
        cout << "";
    }
    Mystring(char s[])
    {
        strcpy(str, s);
    }
    Mystring operator+(Mystring str1)
    {
        strcat(str, str1.str);
        return *this;
    }

    int operator==(Mystring str1)
    {
        int c = strcmp(str, str1.str) == 0 ? 1 : 0;
        return c;
    }


};

int main()
{

    Mystring str1("delhi"), str2(" INDIA");
    Mystring strs = str1 + str2;
    cout << strs.str;
    if (str1 == str2)
        cout << "\nstring are equal\n";
    else
        cout << "\nstring are not equal\n";


    cout << endl
		 << "Name - "; // Enter your name here
	cout << endl
		 << "Roll No. - "; // Enter your roll no here

    return 0;
}
