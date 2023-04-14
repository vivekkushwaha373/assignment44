#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
int main()
{
    string a="helloworld";
    set<char>x(a.begin(),a.end());
    for(auto i=x.begin();i!=x.end();i++)
    {
        cout<<*i;
    }
    
    return 0;
}