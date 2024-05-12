#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int daughter=x/5;
    int father=(x-daughter);
    printf("%d %d\n",father,daughter);


    return 0;
}