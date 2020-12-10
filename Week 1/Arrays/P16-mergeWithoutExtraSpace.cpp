#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    int count = 0;
    for(int i=n-1; i>=0;i--)
    {
        if(count<m){
            if(arr1[i]>arr2[count]){
            int temp = arr1[i];
            arr1[i] = arr2[count];
            arr2[count] = temp;
        }
        }
        count++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}

int main()
{
    int n;
    cout<<"Enter Size of Array 1"<<endl;
    cin>>n;
    cout<<"Enter elements of Array 1"<<endl;
    int arr1[n];
    for (int i = 0; i < n; i++) cin>>arr1[i];
    int m;
    cout<<"Enter Size of Array 2"<<endl;
    cin>>m;
    cout<<"Enter elements of Array 2"<<endl;
    int arr2[m];
    for (int i = 0; i < n; i++) cin>>arr2[i];
    merge(arr1,arr2,n,m);
    for (int i = 0; i < n; i++) cout<<arr2[i]<<" ";
    for (int i = 0; i < n; i++) cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}