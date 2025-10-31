#include <stdio.h>

#define size 1000

int main() {
    int n = 0;
    scanf("%d", &n);
    
    int A[size];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);

    if (l - 1 < 0) {
        l = 0;
    } else {
        l = l - 1;
    }

    if (r - 1 >= n) {
        r = n - 1;
    } else {
        r = r - 1;
    }
        
    int max = A[l];
    int max_i = l;
    for (int i = l; i <= r; i++) {
        if (A[i] > max) {
            max = A[i];
            max_i = i;
        }
    }
    printf("%d %d\n", max, max_i + 1);
    return 0;
}