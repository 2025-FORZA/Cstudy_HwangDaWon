#include <stdio.h>

int main() {
	int S;
	while (1) {
		if (scanf("%d", &S)!=1||S == 0)
			break;
		while (1) {
			printf("%d", S);
			if (S < 10) break;
			printf(" ");
			int prod = 1, temp = S;
			while (temp > 0) {
				prod *= (temp % 10);
				temp /= 10;
			}
			S = prod;
		}
		printf("\n");
	}
	return 0;
}
