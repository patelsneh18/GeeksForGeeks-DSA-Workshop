#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    int maxo=arr[n-1];
    
    int prevMax =0;
    vector<int> vec;
    vec.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        prevMax = maxo;
        maxo = max(maxo,arr[i]);
        if(prevMax != maxo || maxo==arr[i]) vec.insert(vec.begin(), maxo);;
    }
    return vec;
    
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    vector<int> ans = leaders(arr,n);
    for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}