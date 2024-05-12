#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[51],b[51];
        scanf("%s %s",&a,&b);
        int al=strlen(a);
        int bl=strlen(b);
        int mx;
        if(al>=bl)mx=al;
        else mx=bl;

        for(int i=0; i<mx; i++)
        {
            if(i<al)printf("%c",a[i]);//if(i<al);
            if(i<bl)printf("%c",b[i]);//if(i<bl)
        }
        printf("\n");
    }
    return 0;
}
