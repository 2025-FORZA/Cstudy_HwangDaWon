#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ans = -1;

    for (int x = n / 5; x >= 0; x--) {
        int y = n - x * 5;
        if (y % 3 == 0) {
            int z = y / 3;
            int sum = x + z;
            if (ans == -1 || sum < ans) {
                ans = sum;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
