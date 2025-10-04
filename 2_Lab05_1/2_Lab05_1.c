#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int max;
    int arr[100001];
    int x;

    for (int i = 0; i < t; i++) {
        scanf("%d", &x);
        max = x;
        arr[i] = max;
        while (1) {
            if (x == 1) {
                break;
            }
            else {
                if (x % 2 == 0) {
                    x = x / 2;
                }
                else {
                    x = x * 3 + 1;
                }

                if (x > max) {
                    max = x;
                    arr[i] = max;
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", arr[i]);
    }
}
