#include<stdio.h>
 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int cnt[m+1];
    for(int i=0; i<m+1; i++)
    {
        cnt[i]=0;
    }
    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        cnt[a]++;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    return 0;
}
