#include <stdio.h>
#include <string.h>

int main() {
    char x[10], y[10], z[10];
    char* color[] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
    int a, b, c;

    scanf("%s %s %s", x, y, z);

    for (int i = 0; i < 10; i++) {
        if (strcmp(x, color[i]) == 0) a = i;
        if (strcmp(y, color[i]) == 0) b = i;
        if (strcmp(z, color[i]) == 0) c = i;
    }

    long long result = (a * 10 + b);
    for (int i = 0; i < c; i++) {
        result *= 10;
    }

    printf("%lld\n", result);
    return 0;
}
