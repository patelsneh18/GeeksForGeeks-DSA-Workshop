#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    if (N < 0) 
        return 0; 
  
    if (N <= 1) 
        return 1; 
  
    double digits = 0; 
    for (int i=2; i<= N; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<digitsInFactorial(n)<<endl;
    return 0;
}