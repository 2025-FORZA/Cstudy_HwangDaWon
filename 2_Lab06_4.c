#include <stdio.h>

int main() {
	int b;
	char n[100];
	int result = 0;
	scanf("%s %d", n, &b);
	for (int i = 0;n[i] != '\0';i++) {
		int value;
		if ('0' <= n[i] && n[i] <= '9') {
			value = n[i] - '0';
		}
		else { value = n[i] - 'A' + 10; }
		result = result * b + value;
	}
	printf("%d\n", result);


}
