#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
int main()
{
    set<int>x;
    x.insert(8);
    x.insert(2);
    x.insert(7);
    x.insert(5);

    auto i=x.lower_bound(8);
    if(i!=x.end())
    cout<<*i;
    else
    {
        cout<<"value exceeds the maximum ";
    }
    
    return 0;
}