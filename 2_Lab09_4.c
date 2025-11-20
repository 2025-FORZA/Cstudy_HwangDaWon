#include <stdio.h>

int main() {
    int n;
    int left[11];
    int seat[11] = {0};
    int i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &left[i]);
    }

   
    for (i = 1; i <= n; i++) {
        int count = left[i];

        for (j = 1; j <= n; j++) {
            if (seat[j] == 0) { 
                if (count == 0) {
                    seat[j] = i;
                    break;
                }
                count--; 
            }
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", seat[i]);
    }

    return 0;
}
