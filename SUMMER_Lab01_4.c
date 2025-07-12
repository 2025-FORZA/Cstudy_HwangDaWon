#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    char str[201];
    scanf("%s", str);

    int len = strlen(str);
    int row = len / k;

    char arr[20][20];
    int idx = 0;

    for (int r = 0; r < row; r++) {
        if (r % 2 == 0) {
            for (int c = 0; c < k; c++) {
                arr[r][c] = str[idx++];
            }
        } else {
            for (int c = k - 1; c >= 0; c--) {
                arr[r][c] = str[idx++];
            }
        }
    }

    for (int c = 0; c < k; c++) {
        for (int r = 0; r < row; r++) {
            printf("%c", arr[r][c]);
        }
    }

    printf("\n");
    return 0;
}
