#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int mid = 0;
    int l = 0;
    int r = n - 1;
    while (r >= l)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == k) return mid;
        if (arr[mid] < k) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    int k;
    cin>>k;
    
    binarysearch(arr, 5, 2);
    return 0;
}