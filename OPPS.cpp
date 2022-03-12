#include <iostream>

using namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;
    
    void Intro(){
        
        cout<<"Name - "<< Name<< endl;
        cout<<"Company - "<< Company<< endl;
        cout<<"Age - "<< Age<< endl;
        
    }
    
};


int main()
{
    //cout<<"Hello World";
    
    Employee employee;
    
    employee.Name = "Arpit";
    employee.Company = "Random X";
    employee.Age = 23;
    employee.Intro();

    return 0;
}
