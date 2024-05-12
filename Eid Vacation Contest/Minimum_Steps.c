#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int step=0;
    while(x>2)
    {
        x=x-3;
        step++;
    }
    if(x==2 || x==1)step++;
    printf("%d",step);
    return 0;
}