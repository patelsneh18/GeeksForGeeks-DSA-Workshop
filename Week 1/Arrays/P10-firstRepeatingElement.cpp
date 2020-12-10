#include<bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n) {
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j] == arr[i]) return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<firstRepeated(arr,n)<<endl;
    return 0;
}