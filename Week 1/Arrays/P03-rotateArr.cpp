#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n){
    int arrRev[n];
    int index=0;
    for(int i=d;i<n;i++){
        arrRev[index] = arr[i];
        index++;
    }
    for(int i=0;i<d;i++){
        arrRev[index] = arr[i];
        index++;
    }
    for(int i=0;i<n;i++){
        arr[i] = arrRev[i];
    }
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Rotate Array by:"<<endl;
    int d;
    cin>>d;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    rotateArr(arr,d,n);
    cout<<"After Rotating:"<<endl;
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}