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
        fq[a[i]]++;
    }
    int dupli=0; int unq=0;
    for(int i=largest; i>=0; i--)
    {
        if(fq[i]>1)dupli++;
        if(fq[i]==1)unq++;
    }
    printf("duplicate=%d\nUnique=%d\n",dupli,unq);
    return 0;
}
