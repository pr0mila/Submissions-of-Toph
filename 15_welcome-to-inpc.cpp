#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
   int T,i;
   char s[1005];
   sf("%d",&T);
   for(i=0;i<T;i++)
   {
       cin>>s;
       s[0]=s[0]-32;
       pf("Welcome %s\n",s);
   }
}
