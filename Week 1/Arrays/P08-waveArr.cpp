#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
    
    if (n%2==0)
    {
        for (int i = 0; i < n-1; i=i+2)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }   
    } 
    else
    {
        for (int i = 0; i < n-2; i=i+2)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    } 
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    convertToWave(arr,n);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}