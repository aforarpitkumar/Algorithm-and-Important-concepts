#include <iostream>

using namespace std;

class Polygon{
    protected:
    int Side;
    string Name;
    
    public:
    Polygon(int side,string name){
        Side = side;
        Name = name;
    }
    
    void GetInfo(){
        
        cout<< "Polygon having " << Side << " sides called "<< Name<< endl;
        
    }
    
    void AreaFormula(){
        cout << "Area Formula is unknown" << endl;
    }

};

class Quadrilateral : public Polygon{
    public:
    Quadrilateral(int s,string n) : Polygon(s,n){
        
    }
    
    void AreaFormula(){
        
        cout<< "side * side"<< endl;
        
    }
    
};



int main()
{
    //cout<<"Hello World";
    
    Polygon p1(3,"Triangle");
    //p1.Side = 5;
    p1.GetInfo();
    p1.AreaFormula();
    
    Quadrilateral q1(4,"Square");
    q1.GetInfo();
    q1.AreaFormula();

    return 0;
}
