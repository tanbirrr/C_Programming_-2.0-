#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f_num=(n/4)-3;
    for(int i=f_num; i<=f_num+6; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
