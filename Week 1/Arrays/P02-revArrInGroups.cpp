#include<bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k){
        long long start = 0;
        long long end = k-1;
        while(start<end)
        {
            long long temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        start = k;
        end = n-1;
        if(end == start) return;
        while(start<end)
        {
            long long temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<"Enter elements of Array"<<endl;
    vector<long long> arr;
    for (int i = 0; i < n; i++) cin>>arr[i];
    reverseInGroups(arr,n,k);
    for (int i = 0; i < n; i++) cout<<arr[i];
    return 0;
}