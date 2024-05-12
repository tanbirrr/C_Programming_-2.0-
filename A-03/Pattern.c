#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int c=1,s=n-1;
    for(int i=1; i<2*n; i++)
    {
      for(int j=1; j<=s; j++)
      {
         printf(" ");
      }
      for(int j=1; j<=c; j++)
      {
         if(i%2==1)
         {
            printf("#");
         }
         else
         {
            printf("-");
         }
      }
      printf("\n");
      if(i<n)
      {
         s--;
         c+=2;
      }
      else
      {
         s++;
         c-=2;
      }
    }
    return 0;
}
