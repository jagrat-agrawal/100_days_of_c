#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }
    printf("sum of first n odd no. is %d", sum);
    return 0;
}