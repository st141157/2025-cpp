 #include <cstdio>

int main() {
    int a, b, c, d, e, f;
    scanf("%1d", &a);
    scanf("%1d", &b);
    scanf("%1d", &c);
    scanf("%1d", &d);
    scanf("%1d", &e);
    scanf("%1d", &f);
    
    if (a + b + c == d + e + f) 
    {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}