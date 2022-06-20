#include <iostream>
using namespace std;
class tollBooth
{
private:
    unsigned int cars;
    double money;

public:
    tollBooth()
    {
        cars = 0;
        money = 0.0;
    }
    void payingCar()
    {
        cars++;
        money += 0.50;
    }
    void nopayCar()
    {
        cars++;
    }
    void printDetails()
    {
        cout << "\nTollBooth Details:\n\nTotal No. of Cars: " << cars << "\nTotal Amount of Money Collected: " << money << endl;
    }
};
int main()
{

    int paying, nopay;
    cout << "TollBooth\n\nEnter no. of paying cars" << endl;
    cin >> paying;
    cout << "Enter no. of non-paying cars" << endl;
    cin >> nopay;
    tollBooth t;
    for (int i = 1; i <= paying; i++)
    {
        t.payingCar();
    }
    for (int i = 1; i <= nopay; i++)
    {
        t.nopayCar();
    }
    t.printDetails();

    return 0;
}