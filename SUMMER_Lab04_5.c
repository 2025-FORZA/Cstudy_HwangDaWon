#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int count[10] = { 0 };
	int temp = n;
	while (temp > 0) {
		int digit = temp % 10;
		count[digit]++;
		temp /= 10;
	}
	for (int i = 9;i >=0;i--) {
		while (count[i] > 0) {
			printf("%d", i);
			count[i]--;
		}
	}
}
