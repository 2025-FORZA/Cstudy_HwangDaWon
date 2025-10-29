#include <stdio.h>

int main() {
	int x;
    scanf("%d", &x);

    int line = 1;
    int sum = 0;

    while (x > sum + line) {
        sum += line;
        line++;
    }
    int a = x - sum;
    int y, z;
    if (line % 2 == 0) {
        y = a;
        z = line - a + 1;
    }
    else {
        y = line - a + 1;
        z = a;
    }
    printf("%d/%d", y, z);
}
