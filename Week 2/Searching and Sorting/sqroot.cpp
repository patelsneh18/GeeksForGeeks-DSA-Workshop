#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x) 
{
    long long X = x;
    long long root = floor(sqrt(X));
    return root;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<floorSqrt(n)<<endl;    
    return 0;
}