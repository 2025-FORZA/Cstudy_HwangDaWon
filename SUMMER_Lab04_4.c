#include <stdio.h>

int main() {
	int n;
	double max = 0;
	double sum = 0;
	scanf("%d", &n);
	double score[1000];
	for (int i = 0;i < n;i++) {
		scanf("%lf", &score[i]);

		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0;i < n;i++) {
		sum += (score[i] / max * 100.0);
	}
	printf("%f\n", sum / n);
}
