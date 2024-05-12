#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    int flag=0;
    scanf("%d",&x);
    int value;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            value=i;
            flag=1;
            break;
        }
    }
    if(flag==1)printf("%d\n",value);
    else printf("-1\n");
    return 0;
}
