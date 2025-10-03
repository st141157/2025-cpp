#include <cstdio>
int main()
{
    long long a;
    long long b; 
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a*b) - (a + b - 1) + 1);
  return 0;
}