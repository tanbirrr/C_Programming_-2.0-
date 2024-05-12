#include<stdio.h>

int main()
{
    int g,c;
    scanf("%d %d",&g,&c);
    if(g%c==0)
    {
        int n=g/c;
        printf("%d 0",n);
    }
    else
    {
        int m=g%c;
        int o=g/c;
        printf("%d %d",o,m);
    }
    return 0;
}
