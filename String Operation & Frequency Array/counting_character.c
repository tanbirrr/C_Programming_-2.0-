#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int cnt[26]={0};
    for(int i=0; i<strlen(s); i++)
    {
        cnt[s[i]-'a']++;
    }
    // for(int i=0; i<26; i++)
    // {
    //     if(cnt[i]!=0)
    //     {
    //         printf("%c - %d\n",i+97,cnt[i]);
    //     }
    // }
    // for(int i=0; i<strlen(s); i++)
    // {
    //     int val=s[i]-97;
    //     printf("%c %d\n",val+97,cnt[val]);
    // }
    for(int i=0; i<strlen(s); i++)
    {
        int val=s[i]-97;
        if(cnt[val]!=0)
        {
            printf("%c - %d\n",val+97,cnt[val]);
            cnt[val]=0;
        }
    }
    return 0;
}
