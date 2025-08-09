#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
   int x, y;
   scanf("%d\n%d", &x, &y);
    if (x > 0 && y > 0) {
        printf("%d", 1);
    }
    else if (x > 0 && y < 0) {
        printf("%d", 4);
    }
    else if (x < 0 && y>0) {
        printf("%d", 2);
    }
    else {
        printf("%d", 3);
    }
}
