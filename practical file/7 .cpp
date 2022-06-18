#include <iostream>
#include <cmath>
using namespace std;

class DM;
class DB
{
public:
    double feets, inches;
    DB(double x, double y)
    {
        this->feets = x;
        this->inches = y;
    };
    friend void add(DB, DM);
};

class DM
{
public:
    double meters, centimeters;
    DM(double a, double b)
    {
        this->meters = a;
        this->centimeters = b;
    };
    friend void add(DB, DM);
};

void add(DM ob1, DB ob2)
{
    char c;
    cout << "Enter units for answer(F for feet & inches and M for meter & cm)";
    cin >> c;
    if (c == 'F')
    {
        double i = ((ob1.meters * 100) + ob1.centimeters) / 2.54;
        double j = (ob2.feets * 12) + ob2.inches;
        double sum = i + j;
        double k = fmod(sum, 12);
        double l = (sum - k) / 12;
        cout << "After add, Sum = " << l << " feets " << k << " inches ";
    }
    else if (c == 'M')
    {
        double i = (ob1.meters * 100) + ob1.centimeters;
        double j = ((ob2.feets * 12) + ob2.inches) * 2.54;
        double sum = i + j;
        double k = fmod(sum, 100);
        double l = (sum - k) / 100;
        cout << "After add, Sum = " << l << " meters " << k << " centimeters ";
    }
    else
    {
        cout << "Incorrect Units Entered";
    }
}

int main()
{   
    char name;
    int roll_no;
    cout << "Enter Name - ";
    cin >> name;
    cout << "Enter Roll No - ";
    cin >> roll_no;

    cout << "Enter distance(in meters and centimeters)" << endl;
    double a, b;
    cin >> a >> b;
    DM ob1(a, b);
    cout << "Enter distance(in feets and inches)" << endl;
    double x, y;
    cin >> x >> y;
    DB ob2(x, y);
    add(ob1, ob2);
    return 0;
}