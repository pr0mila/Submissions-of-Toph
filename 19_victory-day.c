#include <stdio.h>
#include <string.h>
#define sf scanf
#define pf printf

int main()
{
    int T,i,M;
    char s[110];
    sf("%d",&T);
    for(i=0;i<T;i++)
    {
        sf("%d",&M);
        if(M==1)
        pf ("Bir Sreshtho Captain Mohiuddin Jahangir: Amra Tomay Vulbo Na.\n");
        else if(M==2)
        pf ("Bir Sreshtho Sepahi Hamidur Rahman: Amra Tomay Vulbo Na.\n");
        else if(M==3)
        pf ("Bir Sreshtho Sepahi Muhammad Mustafa: Amra Tomay Vulbo Na.\n");
        else if(M==4)
        pf ("Bir Sreshtho Engine Room Artificer Mohammad Ruhul Amin: Amra Tomay Vulbo Na.\n");
        else if(M==5)
        pf ("Bir Sreshtho Flight Lieutenant Matiur Rahman: Amra Tomay Vulbo Na.\n");
        else if(M==6)
        pf ("Bir Sreshtho Lance Naik Munshi Abdur Rouf: Amra Tomay Vulbo Na.\n");
        else
        pf ("Bir Sreshtho Lance Naik Noor Mohammad Sheikh: Amra Tomay Vulbo Na.\n");
    }
