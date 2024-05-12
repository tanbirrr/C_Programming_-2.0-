#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[10001];
        scanf("%s",s);
        int c=0,v=0,d=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]>= '0' && s[i]<= '9')d++;
            else if(s[i]>= 'a' && s[i]<='z')v++;
            else c++;
        }
        printf("%d %d %d\n",c,v,d);
    }
    
    return 0;
}
