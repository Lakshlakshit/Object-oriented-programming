#include<iostream>
using namespace std;
int hcf(int a,int b){
   int lowest=a>b?b:a;
   while(true)
   {
	if(a%lowest==0 && b%lowest==0)
		   break;
		
		lowest--;
	}
	return lowest;   
}
class Rational{
    private:
    int p,q;
    public:
    Rational(int p,int q){
        this->p = p;
        this->q = q;
    }
    Rational(){}
    Rational operator + (Rational r){
        Rational res;
        res.p = p*r.q + r.p*q;
        res.q = q * r.q;
        int h=hcf(res.p,res.q);
        res.p /= h;
        res.q /= h;
        return res;
    }
    void printFraction(){
        cout<<"Sum = "<<p<<" / "<<q;
    }
};
int main(){

    cout << endl
		 << "Name - "; // Enter your name here
	cout << endl
		 << "Roll No. - "; // Enter your roll no here

    
    int num1,den1,num2,den2,num3,den3;
    cout<<" Enter 1st Fraction :(p q form) ";
    cin>>num1>>den1;
    cout<<" Enter 2nd Fraction :(p q form) ";
    cin>>num2>>den2;
    Rational r1(num1,den1);
    Rational r2(num2,den2);
    Rational r3 = r1 + r2;
    r3.printFraction();

    

    return 0;
}