#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int arr[5] = {1,4,3,5,2};
    int n= 5;
   
    
    for ( int i=0; i<n-1; i++){
        
        for (int j=i+1; j<n; j++){
            
            if ( arr[j]<arr[i] ){
                
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]=temp;
                
            }
        }
        
    }
    
    for (int i=0; i<n; i++){
        
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
