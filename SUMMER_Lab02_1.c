#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {
	int t, h, w, n;
	scanf("%d", &t);
	for (int i = 0;i < t;i++) {
		int x, y;
		scanf("%d %d %d", &h, &w, &n);
		x = n % h;
		y = n / h + 1;
		if (x == 0) {
			x = h;
			y -= 1;
		}
		printf("%d%02d\n", x, y);
	}
	return 0;
}
