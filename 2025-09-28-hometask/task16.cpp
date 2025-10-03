#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld", &a);
    printf("%lld", (a % 100) / 10);
    return 0;
}