#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char day[7][4] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int date = 0;
	for (int i = 0;i < x- 1;i++) {
		date += month[i];
	}
	date += y;

	int week = date % 7;
	printf("%s", day[week]);
}
