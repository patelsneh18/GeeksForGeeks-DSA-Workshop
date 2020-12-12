#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &array, int n)
{
    int arrTemp[n];
    for (int i = 0; i < n; i++) arrTemp[i] = array[array[i]];
    for (int i = 0; i < n; i++) array[i] = arrTemp[i];
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++) cin>>arr[i];
    return 0;
}