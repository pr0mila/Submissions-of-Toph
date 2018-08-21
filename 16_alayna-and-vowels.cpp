#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int cnt=0,i,len;
    char s[1110];
    sf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
        {
            cnt++;
        }
    }
    pf("%d\n",cnt);
}

