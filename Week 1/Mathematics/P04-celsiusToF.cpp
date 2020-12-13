#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
    return C*1.8 +32;
}

int main()
{
    int a;
    cin>>a;
    cout<<cToF(a)<<endl;
    return 0;
}