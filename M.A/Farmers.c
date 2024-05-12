#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int total=m1+m2;
        int nd=(m1*d)/total;
        //printf("%d\n",nd);
        int ans=(d-nd);
        printf("%d\n",ans);
    }
    
    return 0;
}
