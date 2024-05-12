#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int l=n%10;
    int f=n/10;
    if(l%f==0 || f%l==0)printf("YES\n");
    else printf("NO\n");
    return 0;
}
