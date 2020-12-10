#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(int A[],int N)
{
    int arr2[N];
    int prev = -1;
    int k=0;
    for(int i=0;i<N;i++)
    {
        if(prev == A[i])
        {
            continue;
        }
        else{
            arr2[k] = A[i];
            k++;
            prev = A[i];
        }
    }
    for(int i=0;i<k;i++){
        A[i] = arr2[i];
    }
    return k;
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    remove_duplicate(arr,n);
    cout<<"After Removing Duplicates:"<<endl;
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}