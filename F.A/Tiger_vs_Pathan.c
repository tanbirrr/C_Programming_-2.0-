#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int p=0,t=0;
        char s[n+1];
        scanf("%s",s);
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='P')p++;
            else if(s[i]=='T')t++;
        }
        if(t<p)printf("Pathaan\n");
        else if(t>p)printf("Tiger\n");
        else printf("Draw\n");
    }
    
    return 0;
}
