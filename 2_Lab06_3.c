#include <stdio.h>

int main() {
	int n;
	int arr[100000];
	while (1) {
		scanf("%d", &n);
		if (n == -1) {
			break;
		}
		else {
			int x = 0, y = 0;
			for (int i = 1;i < n;i++) {
				if (n % i == 0) {
					arr[y] = i;
					x += i;
					y++;
				}
			}
			if (x == n) {
				printf("%d = ", n);
				for (int j = 0;j < y;j++) {
					printf("%d", arr[j]);
					if (j < y - 1)printf(" + ");
				}
				printf("\n");
			}
			else {
				printf("%d is NOT perfect.\n", n);
			}
		}
	}
}
