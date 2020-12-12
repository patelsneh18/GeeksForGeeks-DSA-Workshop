#include<bits/stdc++.h>
using namespace std;

int absolute(int I) {
    if(I<0) return -I;
    else if(I>0) return I;
    else return 0;
}

int main()
{
    int a;
    cin>>a;
    cout<<absolute(a)<<endl;
    return 0;
}