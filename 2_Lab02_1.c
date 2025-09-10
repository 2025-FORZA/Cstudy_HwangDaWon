#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x1, x2, y1, y2;
	int arr[100][100] = { 0 };
	for (int i = 0;i < 4;i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int j = x1;j < x2;j++) {
			for (int k = y1;k < y2;k++) {
				arr[j][k] = 1;
			}
		}
	}
	int count = 0;
	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++) {
			if (arr[i][j] == 1) {
				count++;
			}
		}
	}
	printf("%d", count);
}
