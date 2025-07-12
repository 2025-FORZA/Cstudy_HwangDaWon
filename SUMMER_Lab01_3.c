#include <stdio.h>

int main() {
	int n, m, i, j; 
	int a[100];
	scanf("%d %d", &n, &m); 
	for (i = 1;i <= n;i++) {
		a[i]= i;
	}
	for (int k = 1;k <= m;k++) {
		scanf("%d %d", &i, &j);
		while (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
	
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");


}
