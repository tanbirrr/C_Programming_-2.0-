#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int mina,rina;
    mina=(x-y)/2+y;
    rina=(x-y)/2;

    printf("%d %d",mina,rina);
    return 0;
}
