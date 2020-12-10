#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) { 
    
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]>0){
            if(arr[i]!=1){
                return 1;;
            }
            break;
        }
    }
    
    if(n==1){
        if(arr[0]!=1) return 1;
        
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>=0){
            if((arr[i+1]-arr[i])>1)
            {
                return arr[i]+1;
            }
        }
    }
    return arr[n-1]+1;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<findMissing(arr,n)<<endl;
    return 0;
}