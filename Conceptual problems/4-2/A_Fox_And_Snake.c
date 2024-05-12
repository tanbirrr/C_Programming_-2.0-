#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=1; i<=r; i++)
    {
        if(i%2==1)
        {
            for(int j=1; j<=c; j++)
            printf("#");
        }
    
        else 
        {
            if(i%4!=0)            {
                for(int j=1; j<c; j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else
            {
                printf("#");
                for(int j=2; j<=c; j++)
                printf(".");
            }

        }
        printf("\n");
    }
    return 0;
}
