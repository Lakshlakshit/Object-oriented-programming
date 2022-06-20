#include <iostream>
using namespace std;
class construct
{
public:
	construct(int area)
	{
		cout << area;
	}
	construct(int a, int b)
	{
		int area = a * b;
		cout << area;
	}
};
int main()
{
	construct o(0);
	construct o2(10, 20);

	string name;
	int rollNo;

	cout << "Name - ";
	cin >> name;
	cout << "RollNo - ";
	cin >> rollNo;
}
