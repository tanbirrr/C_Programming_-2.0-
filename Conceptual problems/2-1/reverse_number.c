#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n!=0)
    {
        int last_digit=n%10;
        rev=rev*10+last_digit;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
