#include <iostream>
using namespace std;
class base
{
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}
	void show()
	{
		cout << "show base class" << endl;
	}
};
class derived : public base
{
public:
	void print()
	{
		cout << "print derived class" << endl;
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};
int main()
{
	base *bptr;
	derived d;
	bptr = &d;
	bptr->print();
	bptr->show();

	string name;
  int rollNo;

  cout << "Name - ";
  cin >> name;
  cout << "RollNo - ";
  cin >> rollNo;

  return 0;
}
