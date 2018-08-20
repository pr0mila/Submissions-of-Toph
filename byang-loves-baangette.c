#include <stdio.h>
#include <string.h>

#define sf scanf
#define pf printf

int main()
{
    char s[110];
    gets(s);
    if(strcmp(s, "Who loves Byang?") == 0)
        pf ("Byangette");
    else if(strcmp(s, "Who loves Byangette?") == 0)
        pf ("Byang");
}
