#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf("%s",&s);
        int l=strlen(s);
        int count=0;
        if(l<=10)
        {
            printf("%s\n",s);
        }
        else
        {
            for(int i=1; i<strlen(s)-1; i++)
            {
               count++;
            }
            printf("%c%d%c\n",s[0],count,s[strlen(s)-1]);
        }
    }
    return 0;
}
