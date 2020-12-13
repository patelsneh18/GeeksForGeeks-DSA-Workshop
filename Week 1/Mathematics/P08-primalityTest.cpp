#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N)
{
    int n=sqrt(N);
    for(int i=2;i<=n;i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}