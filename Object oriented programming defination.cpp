/* string OPPS = "Object oriented programming allow us to represent real life obects in programming 
  and those real life objects are going to be represented together with there attribute and there behaviour as well"
  
  The most important concepts of OOP is class and objects:
  
  Class - A class is going to represent a template meaning a blueprint and than an object represent an example of that class or an instance of that class
  
  For Example a class can be a car then object of car class can be BMW Tesla Maruti and so on.
  Another Example a class can be fruits then object of fruit class can be Apple, Banana, Mango and so on.
  
  That car class for example have some attribute and has some behaviours as well.
  Now attribute of car class well car has a Name for example BMW Tesla 
  
*/

#include <iostream>
#include <vector>

using namespace std;

class YoutubeChannel{
public:
  string Name;
  string Ownername;
  int SubscribersCount;
  vector<string> Published_Video;
  
  void getInfo(){

    cout<< "Channel Name - " << Name<< endl;
    cout<< "Ownername - " <<Ownername<< endl;
    cout<< "SubscribersCount - " <<SubscribersCount<< endl;
    int i=1;
    for (auto x:Published_Video){
        
        cout<< "Video number "<< i << " - "<< x<< endl;
        i++;
    }
    
  }
  
};

int main()
{
    YoutubeChannel channel1;
    
    channel1.Name = "Programming Bro";
    channel1.Ownername= "Arpit";
    channel1.SubscribersCount = 10;
    channel1.Published_Video = {"C++ for Biggners","OPPs Concepts"};
    channel1.getInfo();
    
    return 0;
    
}



