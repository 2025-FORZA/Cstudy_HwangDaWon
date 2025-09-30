#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    char x[82];
    char y[82];
    scanf("%d", &t);

    char answers[1000][83];

    for (int i = 0; i < t; i++) {
        scanf("%s %s", x, y);
        int x_len = strlen(x);
        int y_len = strlen(y);
        int max_len = x_len > y_len ? x_len : y_len;
        char result[83];
        int k = 0;
        int result_len = 0;

        for (int j = 0; j < max_len; j++) {
            int xi = (x_len - 1 - j >= 0) ? x[x_len - 1 - j] - '0' : 0;
            int yi = (y_len - 1 - j >= 0) ? y[y_len - 1 - j] - '0' : 0;
            int sum = xi + yi + k;
            k = (sum >= 2) ? 1 : 0;
            result[j] = (sum % 2) + '0';
        }
        result_len = max_len;
        if (k) {
            result[result_len++] = '1';
        }

        
        int last = result_len - 1;
        while (last > 0 && result[last] == '0') last--;

        
        int idx = 0;
        for (int j = last; j >= 0; j--) {
            answers[i][idx++] = result[j];
        }
        answers[i][idx] = '\0';
    }

   
    for (int i = 0; i < t; i++) {
        printf("%s\n", answers[i]);
    }

    return 0;
}
