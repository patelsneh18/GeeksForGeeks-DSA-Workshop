#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){
    int res = 0;
    int leftMax[n];
    leftMax[0] = arr[0];
    int leftMaxo=leftMax[0];
    for(int i=1;i<n;i++){
        leftMaxo = max(leftMaxo,arr[i]);
        leftMax[i] = leftMaxo;
    }
    int rightMax[n];
    rightMax[n-1] = arr[n-1];
    int rightMaxo=rightMax[n-1];
    for(int i=n-2;i>=0;i--){
        rightMaxo = max(rightMaxo,arr[i]);
        rightMax[i] = rightMaxo;
    }
    
    for (int i = 1; i < n-1; i++) {
        int left = leftMax[i];
        int right = rightMax[i];
        res = res + (min(left, right) - arr[i]); 
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<trappingWater(arr,n)<<endl;
    return 0;
}