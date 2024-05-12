#include<stdio.h>
#include<string.h>
int main()
{
    int cnt[26]={0};
    char c;
    while(scanf("%c",&c) != EOF)
    {
        int val=c-97;
        cnt[val]++;

    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i]!=0)
        printf("%c : %d\n",i+97,cnt[i]);
    }
    return 0;
}
