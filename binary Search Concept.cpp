
#include <iostream>

using namespace std;

int BinarySearch(int n, int arr[], int key){
    
    int s =0;
    int e =n;
    int ans = 0;
    
    while (s<=e){
        
        int mid = (s+e)/2;
        
        if(arr[mid]==key){
            
            ans=mid;
            return ans;
            
        } 
        
        else if (arr[mid]>key){
            
            e = mid-1;
        }
        
        else {
            
            s = mid+1;
        }
        
        
    }
    
    return -1;
}

int main()
{
    //cout<<"Hello World";
    
    int n,key;
    
    cin>>n;
    
    int arr[n];
    
    for (int i=0; i<n; i++){
        
        cin>> arr[i];
    }
    
    cin>>key;
    
    cout<<BinarySearch(n,arr,key);
    
    

    return 0;
}
