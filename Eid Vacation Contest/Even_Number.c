#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int first_number=(n/5)-4;
    for(int i=first_number; i<=first_number+8; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
