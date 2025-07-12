#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int min = num[0], max = num[0]; // 첫 번째 값으로 초기화

    for (int i = 1; i < n; i++) {
        if (num[i] < min) min = num[i];
        if (num[i] > max) max = num[i];
    }

    printf("%d %d", min, max);
    return 0;
}
