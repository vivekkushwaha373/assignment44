#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
int main()
{
    set<int>x;
    x.insert(8);
    x.insert(2);
    for(auto i=x.begin();i!=x.end();i++)
    cout<<*i<<" ";
    return 0;
}