#include <iostream>

using namespace std;

class Human{
    
    protected:
    string Name;
    int Age;
    
    public:
    
    Human(string name, int age){
        
        Name = name;
        Age = age;
        
    }
    
    void GetInfo(){
        
        cout<< "Name - "<< Name<< endl;
        cout<< "Age - "<< Age<< endl;
        
    }
    
    void profession(){
        
        cout <<"Profession - " << "Unemployed"<< endl;
        
    }
    
};

class Men : public Human{
    
    public:
    Men(string name,int age): Human(name,age){
        
    }
    
    void profession(){
        
        cout <<"Profession - " << "Employed"<< endl;
        
    }
    
};

class Child : public Human{
    
    public:
    Child(string name,int age): Human(name,age){
        
    }
    
};



int main()
{
    cout<<"Hello World";
    
    Men m1("Anurag",22);
    m1.GetInfo();
    m1.profession();
    
    cout<< endl;
    
    Child c1("Ram", 10);
    c1.GetInfo();
    c1.profession();

    return 0;
}
