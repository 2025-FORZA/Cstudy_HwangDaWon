#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int x = 2; 
	for (int i = 0; i < N; i++) {
		x = x * 2 - 1;
	}
	int y = x * x;
	printf("%d", y);
}
