#include <stdio.h>
int main(void) {
	char n[16];
	while (1) {
		scanf("%s", &n);
		int len = strlen(n);
		int count = 0;
		if (n[0] != '0') {
			for (int i = 0;i < len;i++) {
				if (n[i] == '0') {
					count += 4;
				}
				else if (n[i] == '1') {
					count += 2;
				}
				else { count += 3; }
			}
			count += len + 1;
			printf("%d\n", count);
			}
		else{
			break;
		}
	}
}
