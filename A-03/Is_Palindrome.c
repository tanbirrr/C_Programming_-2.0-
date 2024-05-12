#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int i=0,j=strlen(s)-1;
    int flag=1;
    while (i<j)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)return 1;
    else return 0;
    

}
int main()
{
    char s[1001];
    scanf("%s",s);
    int ans=is_palindrome(s);
    if(ans==1)printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
