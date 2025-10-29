#include <stdio.h>

int main() {
	int n;
	int h[100001];
	int cnt = 1;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &h[i]);
	}
    int max = h[n - 1];
	for (int i = n - 2;i >= 0;i--) {
		if (h[i] > max) {
			cnt++;
			max = h[i];
		}
	}
	printf("%d", cnt);
	
}
