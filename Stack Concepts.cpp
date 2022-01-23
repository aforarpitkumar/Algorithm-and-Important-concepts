#include <iostream>
#include <stack> 

using namespace std;

void PrintStack(stack<int> st){
    
    while (!st.empty()){
        
        cout << st.top()<< endl;
        st.pop();
    }
    
}

int main()
{
    //cout<<"Hello World";
    
    stack<int> St;
    
    St.push(1);
    St.push(2);
    St.push(3);
    St.push(4);
    
    PrintStack(St);
    

    return 0;
}
