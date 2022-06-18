#include <iostream>
using namespace std;
int main () {
   int x = 50;
   int y = 0;
   double z = 0;
	try {
     if( y == 0 ) 
      throw "Division by zero condition!";
    double res=x/y;
    cout<<res;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

    cout << endl
		 << "Name - "; // Enter your name here
	cout << endl
		 << "Roll No. - "; // Enter your roll no here
   return 0;
}