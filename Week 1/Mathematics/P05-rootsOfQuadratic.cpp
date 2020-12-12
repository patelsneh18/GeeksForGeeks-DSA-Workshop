#include <bits/stdc++.h>
using namespace std;

vector<int> quadraticRoots(int a, int b, int c)
{
    vector<int> ans;
    int D = b * b - 4 * a * c;

    ans.push_back((-b + D) / 2 * a);
    ans.push_back((-b - D) / 2 * a);

    return ans;
}

int main()
{
    vector<int> roots = quadraticRoots(1,-7,12);
    for (int i = 0; i < 2; i++) cout<<roots[i]<<" ";
    cout<<endl;
    
    return 0;
}