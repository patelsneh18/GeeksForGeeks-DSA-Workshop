#include<bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n) {
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1) return i;
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
    cout<<transitionPoint(arr,n)<<endl;
    return 0;
}