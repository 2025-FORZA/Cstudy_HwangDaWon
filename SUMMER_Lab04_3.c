#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for (int j = 0;j < t;j++) {
		char arr[80];
		scanf("%s", arr);
		int len = strlen(arr);
		int score = 0;
		int con = 0;
		for (int i = 0;i < len;i++) {
			if (arr[i] == 'O') {
				con++;
				score += con;
			}
			else {
				con = 0;
			}
	}
		printf("%d\n", score);
	}
	
}
