#include <iostream>
#include <string.h>
using namespace std;
class Complex
{
public:
    int real;
    int img;
    Complex()
    {
        cout << "";
    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator*(Complex c)
    {
        Complex res;
        res.real = real * c.real - img * c.img;
        res.img = real * c.img + img * c.real;

        return res;
    }

    Complex operator/(Complex c)
    {
        Complex res;
        res.real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
        res.img = (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img);
        return res;
    }
    void operator+=(Complex c)
    {

        real = real + c.real;
        img = img + c.img;
    }

    Complex operator+(Complex c)
    {
        real = real + c.real;
        img = img + c.img;
        return *this;
    }

    Complex operator-(Complex c)
    {
        real = real - c.real;
        img = img - c.img;

        return *this;
    }
};

int main()
{

    string name;
    int rollNo;

    cout << "Name - ";
    cin >> name;
    cout << "RollNo - ";
    cin >> rollNo;
    
    Complex c1(1, 1), c2(1, 1);
    Complex res = c1 * c2;
    Complex c5 = c1 + c2;
    Complex c4(2, 3), c3(4, 4);
    Complex c7(1, 1), c8(1, 1);
    Complex c6 = c7 - c8;
    c4 += c3;
    cout << "+= overload" << endl;
    cout << c4.real << "" << c4.img << endl;
    cout << "+ overload" << endl;
    cout << c5.real << "" << c5.img << endl;
    cout << "- overload" << endl;
    cout << c6.real << "" << c6.img << endl;
    cout << "* overload" << endl;
    cout << res.real << "" << res.img << endl;


}