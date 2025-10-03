#include <stdio.h>
int main()
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", ((a * b) % 109 + 109) % 109 + 1);
    return 0;
}