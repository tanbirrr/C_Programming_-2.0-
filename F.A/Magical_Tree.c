#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s=1;
    int l=(n+1)/2+5;
    int space=l-1;
    for(int i=1; i<=l; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=s; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        s+=2;
    }
    int space2=((l*2)-1-n)/2;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=space2; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
