#include<stdio.h>

int main()
{
    float x,p;
    scanf("%f %f",&x,&p);
    float r=100-x;
    printf("%.2f\n",(p/r)*100);
    return 0;
}
