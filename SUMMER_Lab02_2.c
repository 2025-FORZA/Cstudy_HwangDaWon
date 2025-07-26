#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {
	int a[5];
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}
	while (1) {
		int x = 1;
		int temp;
		for (int i = 0;i < 4;i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				
				x = 0;

				for (int j = 0;j < 5;j++) {
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
		if (x) {
			break;
		}
	}
	return 0;
}
