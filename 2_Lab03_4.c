#include <stdio.h>

int main(void) {
    int a, b, c, d, x;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int num, den;

    if (b != d) {
        num = a * d + c * b;  
        den = b * d;
    } else {
        num = a + c;
        den = b;
    }

    int m = num, n = den;
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    int g = m;

    printf("%d %d\n", num / g, den / g);
    return 0;
}
