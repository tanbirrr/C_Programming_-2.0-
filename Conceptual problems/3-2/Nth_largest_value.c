#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    scanf("%d",&value);
    int largest=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>largest)largest=a[i];
    }
    int fq[largest+1];
    for(int i=0; i<=largest; i++)
    {
        fq[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        fq[a[i]]=1;
    }
    int cnt=0;
    for(int i=largest; i>=0; i--)
    {
        if(fq[i]==1)cnt++;
        if(cnt==value)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
