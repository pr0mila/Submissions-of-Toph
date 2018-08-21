#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
   int T,i,M,P,N,ara[1000],g,c;
   sf("%d",&T);
   for(i=0;i<T;i++)
   {
        sf("%d%d%d",&M,&P,&N);
        c=M*100;
        g=P*N;
        if(c >= g)
            pf("Case %d: YES\n",i+1);
        else
            pf("Case %d: NO\n",i+1);
   }
}
© 2018 Toph | Furqan Software
