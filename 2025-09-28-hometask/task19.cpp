#include <stdio.h>
int main()
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a % b) * (b % a) + 1);
    return 0;
}