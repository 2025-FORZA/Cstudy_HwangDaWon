#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main() {
	int n, sum=0;
	scanf("%d", &n);
	char num[101] = {};
	scanf("%s", num);
	int len = strlen(num);
	for (int i=0;i < len;i++){
		sum += num[i] - '0';
	}
	printf("%d", sum);
	return 0;
}
