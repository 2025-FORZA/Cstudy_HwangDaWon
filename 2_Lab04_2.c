#include <stdio.h>
#include <string.h>

int main(void) {
    char s[5][15] = {0}; 
    int len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", s[i]);
        if ((int)strlen(s[i]) > len) len = strlen(s[i]);
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < (int)strlen(s[j])) 
                printf("%c", s[j][i]);
        }
    }

    return 0;
}
