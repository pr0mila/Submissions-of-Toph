#include <stdio.h>
#include <string.h>

#define sf scanf
#define pf printf

int main()
{
    char s[110],h[110];
    int i,j,len;
    gets(s);
    len=strlen(s);
    for(i=0,j=0;i<len;i++)
    {
        if(s[i] != ' ')
        {
            h[j]=s[i];
            j++;
        }

    }
    h[j]=0;
    pf("%s\n",h);
}
