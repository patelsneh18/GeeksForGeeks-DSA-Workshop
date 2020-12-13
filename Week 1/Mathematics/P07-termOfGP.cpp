#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    double a=A;
    double b=B;
    double r = b/a;
    
    double term = a*pow(r,N-1);
    term = floor(term);
    return term;
}

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int n;
    cin>>n;
    cout<<termOfGP(a,b,n); 
    return 0;
}