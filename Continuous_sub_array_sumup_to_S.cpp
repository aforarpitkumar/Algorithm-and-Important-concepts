/*

Input:
N - 5
S-12
A[] = {1,2,3,7,5}

Output:
 2 4
 
*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    //cout<<"Hello World";

    int n,s;
    
    cin>>n>>s;
    
    int arr[n];
    
    int ans=0;
    
    for (int i=0; i<n; i++){
        
        cin>> arr[i];
        
    }
    
    int i=0, j=0, st = -1, end = -1, sum =0;
    
    while (j<n && sum+arr[j] <=s){
        
        sum = sum + arr[j];
        j++;
    }
    
    if (sum == s){
        
        cout<< i+1<<" "<<j;
        return 0;
        
    }
    
    while(j<n){
        
        sum = sum + arr[j];
        
        while (sum>s){
            
            sum = sum - arr[i];
            i++;
        }
        
        if (sum == s){
            
            st = i+1;
            end = j+1;
            
            break;
        }
        
        j++;      
        
    }    
    cout<<st<< " "<< end;

    return 0;
}
