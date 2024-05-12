#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
       int m=n%10;
       printf("%d",m);
       n=n/10;
    }
    return 0;
}
