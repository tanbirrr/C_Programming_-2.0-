#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    int col=row;
    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int pd=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)pd+=a[i][j];
        }
    }
    int sd=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i+j==row-1)sd+=a[i][j];
        }
    }
    printf("%d\n",abs(pd-sd));
    return 0;
}
