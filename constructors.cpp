/*

Constructor -> It is a special method that is going to be invoked each time when you create
an object of specific class.

  Meaning that method is going to be called on the construction of that objects
  
  there are two rules for constructors:
  1- Constructor has same name as your class
  2- Constructor does not have return type.
    
*/

#include <iostream>
#include <vector>

using namespace std;

class YoutubeChannel{
    public:
    
    string Name;
    string Owner_Name;
    int Subscriber_Count;
    
    YoutubeChannel(string name, string owner_name){
        
        Name = name;
        Owner_Name = owner_name;
        Subscriber_Count =0;
        
    }
    
    void getInfo(){
        
        cout<< "Youtube Channel Name - " << Name << endl;
        cout<< "Owner Name - " << Owner_Name << endl;
        cout<< "Subscribers - "<< Subscriber_Count<< endl;
        
    }
    
  
};

int main()
{
    //cout<<"Hello World";
    
    YoutubeChannel channel1("Programming Bro", "Arpit");
    
    channel1.getInfo();
    
    
}


