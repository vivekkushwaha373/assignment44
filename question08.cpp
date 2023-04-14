#include<bits/stdc++.h>
using namespace std;
 auto search(auto x,int n)
{
auto i=x->begin();
while(i!=x->end())
{
    if(*i==n)
    {
        return i;
    }
     i++;
    if(i==x->end())
    {
        return x->end();
    }
   
}

}
int main()
{
   set<int>x={4,7,23,6,8};
  auto i=search(&x,1); 
   
   if(i!=x.end())
   cout<<*i;
   else
  {
    cout<<"Element is not found";
  }
return 0;
}