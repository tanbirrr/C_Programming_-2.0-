// #include<stdio.h>
// long long int fun(int a[],int n,int i)
// {
//     if(i==n)return 0;
//     long long int sum=0;
//     sum+=a[i];
//     long long int l=fun(a,n,i+1);
//     return l+sum;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     long long int sum=fun(a,n,0);
//     printf("%lld",sum);
//     return 0;
// }
#include<stdio.h>
long long int ei(int a[],int n,int i)
{
    if(i==n) return 0;
    long long int sum;
    sum=ei(a,n,i+1);
    return sum+a[i];
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
    long long int sum=ei(a,n,0);
    printf("%lld",sum);
}