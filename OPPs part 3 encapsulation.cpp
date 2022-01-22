/* 

Encapsulation is defined as the wrapping up of data under a single unit. 
Another way to think about encapsulation is, 
it is a protective shield that prevents the data 
from being accessed by the code outside this shield.

*/


#include <iostream>
#include <vector>

using namespace std;

class YoutubeChannel{
    
    private:
    // encapsulation process:  
    string Name;
    string Owner_Name;
    int Subscriber_Count;
    
    
    public:
    
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
    
    void SomeOne_Subscriber(){
        Subscriber_Count++;
    }
    
    void SomeOne_UNSubscriber(){
        
        if (Subscriber_Count>0){
           Subscriber_Count--;
        }
    }
    
  
};

int main()
{
    //cout<<"Hello World";
    
    YoutubeChannel channel1("Programming Bro", "Arpit");
    
    
    channel1.SomeOne_Subscriber();
    channel1.SomeOne_Subscriber();
    channel1.SomeOne_Subscriber();
    channel1.SomeOne_Subscriber();
    channel1.SomeOne_UNSubscriber();
    
    channel1.getInfo();
    
    YoutubeChannel channel2("Competative Programming", "Anubhav");
    
    channel2.getInfo();
    
    
}
