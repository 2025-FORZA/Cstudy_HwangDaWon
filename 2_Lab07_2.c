#include <stdio.h>

int main() {
	int a, b, c;
	char x, y, z, A,B,C;
	scanf("%d %d %d\n", &a, &b, &c);
	scanf(" %c%c%c", &x, &y, &z);
	if (a > b) {
		if (a > c) {
			C = a;
			if (b > c) {
				B = b;
				A = c;
			}
			else {
				B = c;
				A = b;
			}
		}
		else {
			C = c;
			B = a;
			A = b;
		}
	}
	else {
		if (b > c) {
			C = b;
			if (c > a) {
				B = c;
				A = a;
			}
			else {
				B = a;
				A = c;
			}
		}
		else {
			C = c;
			B = b;
			A = a;
		}
	}
	int result[128];
	result['A'] = A;
	result['B'] = B;
	result['C'] = C;

	printf("%d %d %d\n", result[x], result[y], result[z]);

	return 0;
}
