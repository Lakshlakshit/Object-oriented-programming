#include<iostream>
using namespace std;
struct point
{
    int x ;
    int y;
};
int main(){
    point a,b,c;
    cout<<"enter 1st co-ordinates:";
    cin>>a.x>>a.y;
     cout<<"enter 2nd co-ordinates:";
    cin>>b.x>>b.y;
    c.x = a.x+b.x;
    c.y = a.y+b.y;
    cout<<"sum of co-ordinates are : "<<c.x<<","<<c.y;

    return 0;
}