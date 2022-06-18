#include <iostream>
using namespace std;

int main()
{
    int x, y, result;
    char opr;

    // User Details
    char name;
    int roll_no;
    cout << "Enter Name - ";
    cin >> name;
    cout << "Enter Roll No - ";
    cin >> roll_no;

    cout << "enter 1st number : " << endl;
    cin >> x;
    cout << "enter 2nd number : " << endl;
    cin >> y;
    cout << "enter the operation : " << endl;
    cout << "---------------------- " << endl;
    cout << "for addition : +" << endl;
    cout << "for subtraction : -" << endl;
    cout << "for multiplication : *" << endl;
    cout << "for division : /" << endl;
    cin >> opr;

    switch (opr)
    {
    case ('-'):
        result = x - y;
        break;
    case ('/'):
        result = x / y;
        break;
    case ('*'):
        result = x * y;
        break;
    case ('+'):
        result = x + y;
        break;

    default:
        cout << "operator overflow" << endl;
        break;
    }

    cout << result << endl;
}