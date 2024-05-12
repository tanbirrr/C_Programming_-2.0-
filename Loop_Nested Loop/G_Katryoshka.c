#include<stdio.h>

int main()
{
    long long int n,m,k,mn,res=0;
    scanf("%lld %lld %lld",&n,&m,&k);
    if(n==0 || k==0)
    {
        printf("0\n");
    }
    else
    {
        mn=n;
        if(m<mn)
        {
            mn=m;
        }
        if(k<mn)
        {
            mn=k;
        }
        n-=mn;
        m-=mn;
        k-=mn;
        res+=mn;

        if(n/2 <= k)res+=n/2;
        else res+=k;

        printf("%lld\n",res);
    }
    
    return 0;
}
