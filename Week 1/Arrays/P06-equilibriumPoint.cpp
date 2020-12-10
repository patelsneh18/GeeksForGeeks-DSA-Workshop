#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {

    int sum=0;
    int sumC = a[0];
    int sumL = 0;
    int sumR = 0;
    if(n==1) return 1;
    if(n==2) return -1;
    for(int i =0;i<n;i++) sum+=a[i];
    
    for(int i =1;i<n;i++)
    {
        sumC+=a[i];
        sumL = sumC-a[i];
        sumR = sum-sumC;
        if(sumL == sumR) return i+1;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    long long arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<equilibriumPoint(arr,n)<<endl;
    return 0;
}