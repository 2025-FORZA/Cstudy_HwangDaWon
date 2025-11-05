#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  

    int A = 0, B = 0;

    while (a > 0) {
        A = A * 10 + a % 10;
        a /= 10;
    }

  
    while (b > 0) {
        B = B * 10 + b % 10;
        b /= 10;
    }

    if (A > B)
        printf("%d", A);
    else
        printf("%d", B);

    return 0;
}
