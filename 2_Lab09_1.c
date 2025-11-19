#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	char s[51];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%s", s);
		printf("String #%d\n", i+1);
		for (int j = 0;s[j] != '\0';j++) {
			if (s[j] == 'Z') {
				printf("A");
			}
			else {
				printf("%c", s[j] + 1);
			}
		}
		printf("\n\n");
	}
}
