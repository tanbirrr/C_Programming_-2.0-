#include<stdio.h>
int count_before_one(int *a,int n)
{
    int elmnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=1)elmnt++;
        if(a[i]==1)break;
    }
    return elmnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt=count_before_one(a,n);
    printf("%d",cnt);

    return 0;
}
