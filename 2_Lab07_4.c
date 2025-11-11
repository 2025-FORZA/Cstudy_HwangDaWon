#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char s[51];
        scanf("%s", s);

        int x = 0;
        int y = 1; 

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '(') x++;
            else x--;

            if (x < 0) { 
                y = 0;
                break;
            }
        }

        if (x != 0) y = 0; 

        if (y) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
