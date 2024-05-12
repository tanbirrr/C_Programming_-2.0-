#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
