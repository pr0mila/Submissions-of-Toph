#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int t,n,i,x,j, ara[100],sum,k,q;
    sf ("%d",&t);
    for(i=0;i<t;i++)
    {

        sf ("%d %d",&x,&k);
        for(j=0;j<x;j++)
        {
            sf ("%d",&ara[j]);
            if(ara[j]>k)
            {
                q=ara[j]-k;
                sum=sum+q;
            }
        }
        pf ("%d\n",sum);
        sum=0;
    }
}
