#include <cstdio>
int main()
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld", ((b % a + a) / a) + ((b-1) / a), b - a*((b-1)/a));
    return 0;
}