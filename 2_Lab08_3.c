#include <stdio.h>

int main() {
    int n, a, b, c, count = 0;
    scanf("%d", &n);

    while (n > 0) {
        if (n < 100) {
            count++;      
        }
        else {
            a = n / 100;
            b = (n / 10) % 10;
            c = n % 10;

            if (a - b == b - c)
                count++;
        }
        n--;
    }
    printf("%d", count);
}
