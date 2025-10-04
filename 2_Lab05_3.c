#include <stdio.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);

	int day = (v - a) / (a - b);

	if ((v - a) % (a - b) != 0) {
		day++;
	}

	printf("%d", day + 1);

	return 0;
}
