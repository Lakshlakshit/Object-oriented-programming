#include <iostream>
using namespace std;

class MyClass
{
public:
  void myFunction()
  {
    cout << "Some content in parent class.\n";
  }
};

class MyOtherClass
{
public:
  void myOtherFunction()
  {
    cout << "Some content in another class.\n";
  }
};

class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();

  string name;
  int rollNo;

  cout << "Name - ";
  cin >> name;
  cout << "RollNo - ";
  cin >> rollNo;
  return 0;
}
