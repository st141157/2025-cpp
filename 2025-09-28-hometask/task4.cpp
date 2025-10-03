#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    int w = (a * b * c) * 2;
    printf("%d\n", w);
    return 0;
}