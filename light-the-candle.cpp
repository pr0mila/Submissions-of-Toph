
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int t,n,i,x,j, ara[100],sum=0;
    sf ("%d",&t);
    for(i=0;i<t;i++)
    {
        sf ("%d",&x);
        for(j=0;j<x;j++)
        {
            sf ("%d",&ara[j]);
            sum=sum+ara[j];
        }
        pf ("%d\n",sum);
        sum=0;
    }
}


