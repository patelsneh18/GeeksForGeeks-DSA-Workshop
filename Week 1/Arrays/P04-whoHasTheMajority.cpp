#include<bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y)
{
    
    int freqX=0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            freqX++;
        }
    }
    int freqY=0;
    for(int i=0;i<n;i++){
        if(arr[i] == y){
            freqY++;
        }
    }
    if(freqX == freqY){
        return min(x,y);
    }
    else if(freqX>freqY) return x;
    else return y;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<"Enter x:"<<endl;
    int x;
    cin>>x;
    cout<<"Enter y:"<<endl;
    int y;
    cin>>y;
    
    cout<<"Majority:"<<majorityWins(arr,n,x,y)<<endl;
    
    return 0;
}