#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int mlti=(a*b*c);
        long long int num=m/mlti;
        long long int num2=m%mlti;
        if(num2==0)printf("%lld\n",num);
        else printf("-1\n");
    }
    
    return 0;
}
