#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char S[1001]; 
    scanf("%s", S);

    int len = strlen(S);
    char n[1000][1001];

  
    for (int i = 0; i < len; i++) {
        strcpy(n[i], S + i); 
    }

    qsort(n, len, sizeof(n[0]), compare);

    for (int i = 0; i < len; i++) {
        printf("%s\n", n[i]);
    }

    return 0;
}
