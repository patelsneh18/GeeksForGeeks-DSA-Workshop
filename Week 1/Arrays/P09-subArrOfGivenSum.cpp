#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int s){
    vector<int> ans;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(sum>s) break;
        }
    }
    ans.push_back(-1);
    return ans;
    
}

int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;

    cout<<"Enter Sum to Find"<<endl;
    int sum;
    cin>>sum;
    
    cout<<"Enter elements of Array"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    vector<int> ans = subarraySum(arr,n,sum);
    for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}