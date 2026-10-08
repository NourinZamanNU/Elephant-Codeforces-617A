#include <stdio.h>

int main()
{
    int x;
    int count = 0;

    scanf("%d", &x);

    while(x > 0)
    {
        x = x - 5;
        count++;
    }

    printf("%d\n", count);

    return 0;
}