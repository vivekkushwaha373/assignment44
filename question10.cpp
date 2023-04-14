#include<bits/stdc++.h>
using namespace std;
array<int,7> search(array<int,7>x)
{
    set<int>a;
    int k=0;
    array<int,7>s;
    int count=0;
    for(int i=0;i<x.size();i++)
    a.insert(x[i]);
    for(auto i=a.begin();i!=a.end();)
    {
        count++;
        if(*i==count)
        {
         s[k]=count;
         k++;
         i++;
        }
        else
        {
         s[k]=count;
         k++;
        }
    }
    return s;
}
int main()
{
array<int,7>x={1,2,3,6,6,4,7};
array<int,7>y=search(x);
for(int i=0;i<y.size();i++)
cout<<y[i]<<" ";
}