#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int T,i,j;
    float ara[10]={0},sum,n;
    sf("%d",&T);

    for(i=0;i<T;i++)
    {

        sum=0.0;
        sf("%f",&n);
        for(j=0;j<n;j++)
        {
            sf("%f",&ara[j]);
            sum=sum+ara[j];
        }
        pf("Case %d: %.3f\n",i+1,sum/n);
        sum=0.000;

    }
}

