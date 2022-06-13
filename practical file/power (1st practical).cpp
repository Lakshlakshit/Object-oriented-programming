#include <iostream>
using namespace std;
double pwr(int p,double n){
    double result =1;
    cout<<"do you want by default"<<endl;
    char y;
    cin>>y;
    switch (y)
    {
    case ('y'|| 'Y'):
        break;
        case('n'):
        int d;
        cin>>d;
        p=d;
        break;
    
    default:
        break;
    }
    while (p>0)
    {
        result = result*n;
        p--;
    }
    return result;
}
int main()
{
  char name;
  cout<< "Enter Name";
    cin>> name;
    int p;
    double n;
    
    cin>>n;
    double result = pwr(p=2,n);
    cout<<result;
}