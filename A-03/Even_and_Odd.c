#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int e=0,o=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2==0)e++;
        else o++;
    }
    printf("%d %d\n",e,o);
}
int main()
{
    odd_even();
    return 0;
}
