#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int e=0,o=0,p=0,ne=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)e++;
        if(a%2==1 || a%2== -1)o++;
        
        if(a>0)p++;
        else if(a<0)ne++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,ne);
    return 0;
}
