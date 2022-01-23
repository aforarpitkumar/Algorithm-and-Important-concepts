// FIFO - First in first out;

#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> q){
    
    while(!q.empty()){
        
        cout<< q.front()<< endl;
        q.pop();
        
    }
    
}

int main()
{
    //cout<<"Hello World";
    
    queue<int> myq;
    
    myq.push(1);
    myq.push(2);
    myq.push(3);
    myq.push(4);
    
    //myq.pop();
    
    printQueue(myq);

    return 0;
}
