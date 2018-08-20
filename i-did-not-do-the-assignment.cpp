#include <bits/stdc++.h>

#define sf scanf
#define pf printf

int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2; i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i;
    sf ("%d",&n);
    if(1==prime(n))
    {
        pf("NO PUNISHMENT");
    }
    else
    {

        for(i=0;i<n;i++)
        {
            pf("I DID NOT DO THE ASSIGNMENT.\n");
        }

    }
}
