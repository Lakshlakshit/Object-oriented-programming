#include <iostream>
using std::string;

class Employee{
public:
string Name;
string Company;
int Age;
    void  Introduceyourself() {
        std:: cout<<"Name - "<<Name<< std::endl;
          std:: cout<<"Company - "<<Company<< std::endl;
            std:: cout<<"Age - "<<Age<< std::endl;
    }
    Employee(string name, string company, int age){
        Name= name;
        Company= company;
        Age=  age;
    }
};
int main(){
    Employee employee1 = Employee(lakshit,DCRUST,19);
   /*employee1.Name = "lakshit";
     employee1.Company = "DCRUST";
      employee1.Age = 19;
      employee1.Introduceyourself() ;*/

}