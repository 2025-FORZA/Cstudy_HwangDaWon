#include <stdio.h>

int main() {
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int arr[101] = { 0 };
    for (int z = 0;z < m;z++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int y = i;y <= j;y++) {
            arr[y] = k;
        }
    }
    for (int z = 1;z <= n;z++) {
        printf("%d ", arr[z]);
    }
}
