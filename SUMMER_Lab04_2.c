#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int arr[10];
	int result = 0;
	for (int i = 0;i < 10;i++) {
		scanf("%d", &n);
		arr[i] = n%42;
	}
	
	for (int j = 0;j < 10;j++) {
		int a = 0;
		for (int i = 0;i < j;i++) {
			if (arr[i] == arr[j]) {
				a=1;
				break;
			}
		}
		if (!a) {
			result++;
		}
		
	}
	printf("%d",result);
}
