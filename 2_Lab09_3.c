#include <stdio.h>

int main() {
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    char arr[50][50];
    int empty[50] = { 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    int row = 0;
    for (int i = 0; i < n; i++) {
        int ok = 1; 
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'X') {
                ok = 0;
                break;
            }
        }
        if (ok) row++;
    }

    int col = 0;
    for (int j = 0; j < m; j++) {
        int ok = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i][j] == 'X') {
                ok = 0;
                break;
            }
        }
        if (ok) col++;
    }

    if (row > col) printf("%d", row);
    else printf("%d", col);

    return 0;
}
