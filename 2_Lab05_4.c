#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = 0; 
    int x, y; 
    scanf("%d", &x);
    int prev = x; 

    for (int i = 1; i < n; i++) {
        scanf("%d", &y);

        if (y <= prev) {
            if (prev - x > max) {
                max = prev - x;
            }
            x = y;
        }
        prev = y;
    }

    if (prev - x > max) {
        max = prev - x;
    }

    printf("%d\n", max);

    return 0;
}
