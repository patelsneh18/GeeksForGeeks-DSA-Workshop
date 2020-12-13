#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n)
{
    int x = n;
    long long ans = 1;
    for (long long i = 1; i <= n; i++) ans = (ans * i) / (__gcd(ans, i));
    return ans;
}

int main()
{
    long long n;
    cin>>n;
    cout<<getSmallestDivNum(n)<<endl;
    return 0;
}