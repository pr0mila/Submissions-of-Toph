#include <bits/stdc++.h>

#define sf scanf
#define pf printf

int main()
{
    int T,i,m,n,r;
    sf("%d",&T);
    for(i=0;i<T;i++)
    {
        sf("%d %d",&m,&n);
        r=pow(m,2)+pow(n,2);
        pf("Case %d: %d\n",i+1,r);

    }
}
