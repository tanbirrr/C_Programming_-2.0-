#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mn = INT_MAX;
    int mx = INT_MIN;
     int mn_index;
     int mx_index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            mn_index=i;
        }
        if (a[i] > mx)
        {
            mx = a[i];
            mx_index=i;
        }
    }
    int temp = a[mn_index];
    a[mn_index] = a[mx_index];
    a[mx_index] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
