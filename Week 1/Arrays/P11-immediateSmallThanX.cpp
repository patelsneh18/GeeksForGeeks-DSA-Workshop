#include<bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int x)
{
    int minDiff =0;
    int minIndex =-1;
    for(int i=0;i<n;i++){
        if(x-arr[i]>0){
            if( minDiff ==0){
                minDiff=x-arr[i];
                minIndex=i;
                continue;
            }
            int prevDiff = minDiff;
            minDiff = min(minDiff,x-arr[i]);
            if(prevDiff!=minDiff) minIndex = i;
        }
    }
    if(minIndex==-1) return -1;
    return arr[minIndex];   
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    int x;
    cout<<"Enter X"<<endl;
    cin>>x;
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<immediateSmaller(arr,n,x)<<endl;
    return 0;
}