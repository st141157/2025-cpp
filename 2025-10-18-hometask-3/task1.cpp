#include <cstdio>

int main()
{
    int k = 0;
    scanf("%d", &k);
    int i = 0;
    int a = 0;
    int b = 1;
    while(i < k){
        b = a + b;
        a = b - a;
        ++i;
    }
    printf("%d\n", a);
    return 0;
}