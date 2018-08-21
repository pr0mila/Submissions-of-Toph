#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int ara[5],i;
    for(i=0;i<3;i++)
    {
        sf("%d",&ara[i]);
    }
    sort(ara,ara+3);
    pf ("%d\n",ara[2]);

}
