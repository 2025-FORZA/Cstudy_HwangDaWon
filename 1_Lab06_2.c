#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<string.h>

int main() {
	char str[101];
	scanf("%s", str);
	int len = strlen(str);
	int alphabet[26];
	for (int i = 0;i < 26;i++) {
		alphabet[i] = -1;
	}
	for (int i = 0; str[i] != '\0';i++) {
		int index = str[i]-'a';
		if (alphabet[index] == -1) {
			alphabet[index] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	return 0;
}
