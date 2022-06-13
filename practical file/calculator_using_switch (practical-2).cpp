#include <iostream>
using namespace std;

int main()
{
    int x, y, ans;
    char opr;
    cout << "enter 1st number : " << endl;
    cin >> x;
    cout << "enter 2nd number : " << endl;
    cin >> y;
    cout << "enter the operation : " << endl;
    cout << "---------------------- " << endl;
    cout << "for addition : add" << endl;
    cout << "for subtraction : sub" << endl;
    cout << "for multiplication : mul" << endl;
    cout << "for multiplication : div" << endl;
    cin >> opr;
    switch (opr)
    {
    case ('add'):
        ans = x + y;
        cout << ans << endl;
        break;
    case ('sub'):
        ans = x - y;
        cout << "ans", << endl;
        break;
    case ('mul'):
        ans = x * y;
        cout << ans << endl;
        break;
    case ('div'):
        ans = x / y;
        cout << ans << endl;
        break;

    default:
        cout << "check your statement" << endl;
        break;
    }
    return 0;
}

return 0;
}