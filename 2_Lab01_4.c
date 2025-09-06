#include <stdio.h>

int main(void) {
	int n, k;
	int a = 0;
	int arr[10];
	scanf("%d%d", &n, &k);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n-1;i >= 0;i--) {
		if (k / arr[i] > 0) {
			a += (k / arr[i]);
			k = k % arr[i];
		}
	}
	printf("%d", a);
}
