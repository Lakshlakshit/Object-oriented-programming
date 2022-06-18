#include<iostream>
using namespace std;
class Employee{
    public:
    char name[50]="Lakshay";
    int salary=82444;
};
class Manager : public Employee{
    public:
    char department[50]="ECE";
    void toString(){
        cout<<"Manager Details:\n";
        cout<<"Name: "<<name<<"\nSalary: "<<salary<<"\nDepartment: "<<department<<"\n\n";
    }
};
class Executive : public Manager{
    public:
    void toString(){
        cout<<"Executive Details:\n";
        cout<<"Executive "<<"Name: "<<name<<"\nSalary: "<<salary<<"\nDepartment: "<<department<<"\n\n";
    }
};

int main(){
    Manager mg;
    Executive ex;
    mg.toString();
    ex.toString();

    return 0;
}