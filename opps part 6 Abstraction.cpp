/*

*/

#include <iostream>

using namespace std;

class Smartphone{
    
    public:
    
    virtual void Camera()=0;
    virtual void Call()=0;
    
    
    
};

class Android : public Smartphone{
    void Camera(){
        
        cout<< "Android Camera started working" << endl;
    }
    
    void Call(){
        
        cout<< "Android Calling" << endl;
    }
};

class Iphone : public Smartphone{
    void Camera(){
        
        cout<< "Iphone Camera started working" << endl;
    }
    
    void Call(){
        
        cout<< "Iphone Calling" << endl;
    }
};

int main()
{
    //cout<<"Hello World";
    
    Smartphone* s1 = new Android();
    
    s1 -> Camera();
    s1 -> Call();
    
    Smartphone* s2 = new Iphone();
    
    s2 -> Camera();
    s2 -> Call();
    

    return 0;
}
