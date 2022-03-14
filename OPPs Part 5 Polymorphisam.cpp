
#include <iostream>
#include <vector>

using namespace std;

class YoutubeChannel{
    
    private:
    
    int Subscriber_Count;
    
    protected:
    
    string Name;
    string Owner_Name;
    
    
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
    
    void Discription(){
        
        cout<<"Hello everyone it's "<< Owner_Name <<" here and this is my YoutubeChannel"<< endl;
    }
    
  
};

class MusicChannel : public YoutubeChannel {
    public:
    MusicChannel( string name, string owner_name ): YoutubeChannel(name, owner_name){
        
        
        
    }
    
    void Discription(){
        
        cout<<"Hello everyone it's "<< Owner_Name <<" here and this channel is related to Music"<< endl;
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
    
    MusicChannel channel3("Hello Music","Dev");
    channel3.SomeOne_Subscriber();
    channel3.SomeOne_Subscriber();
    channel3.getInfo();
    channel3.Discription();
    
    MusicChannel    channel4("Super Music","Anurag");
    channel4.SomeOne_Subscriber();
    channel4.getInfo();
    channel4.Discription();
    
}
