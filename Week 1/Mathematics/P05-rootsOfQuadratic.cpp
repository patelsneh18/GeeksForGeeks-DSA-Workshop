#include <bits/stdc++.h>
using namespace std;

vector<int> quadraticRoots(int a, int b, int c)
{
    float A = a;
    float B = b;
    vector<int> ans;
    long long D = b * b - 4 * a * c;
    if (D > 0) {
        float x1 = floor((-B + sqrt(D))/(2*A));
        float x2 = floor((-B - sqrt(D))/(2*A));
        
        if(x1>x2){
        ans.push_back(x1);
        ans.push_back(x2);
        }
        
        else {
        ans.push_back(x2);
        ans.push_back(x1);
        }
    }
    else if(D==0){
        float x1 = floor(-B/(2*A));
        ans.push_back(x1);
        ans.push_back(x1);
    }
    else ans.push_back(-1);
        
    return ans;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> roots = quadraticRoots(a,b,c);
    for (int i = 0; i < 2; i++) cout<<roots[i]<<" ";
    cout<<endl;
    return 0;
}