#include <stdio.h>

int main() {
	int arr[9];
	int n;
	for (int i = 0;i <9;i++) {
		scanf("%d", &n);
		arr[i] = n;
	}
	int max = arr[0];
	int index=1;
	for (int i = 0;i <= 7;i++) {
		if (max < arr[i+1]) {
			max = arr[i + 1];
			index = i + 2;
		}
	}
	printf("%d\n%d", max,index);
}
