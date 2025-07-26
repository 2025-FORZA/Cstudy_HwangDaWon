#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char arr[101];
	int i;
	int count = 0;
	scanf("%s", arr);

	int len = strlen(arr);
	for (i = 0;i < len;i++) {
		count++;

		if (arr[i] == '=') {
			if (arr[i - 1] == 's' || arr[i - 1] == 'c') count--;
			else if (arr[i - 1] == 'z') {
				if (arr[i - 2] == 'd') count -= 2;
				else count--;
			}
		}
		if (arr[i] == '-') {
			if (arr[i - 1] == 'c' || arr[i - 1] == 'd') count--;
		}
		if (arr[i] == 'j') {
			if (arr[i - 1] == 'l' || arr[i - 1] == 'n') count--;
		}
	}

	printf("%d\n", count);
}
