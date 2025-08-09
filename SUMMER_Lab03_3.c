#include <stdio.h>

int main() {
   int x;
   char y[4];
   int arr[3];
   scanf("%d\n%s",&x, y);
   for (int i = 0;i < 3;i++) {
      arr[i] = y[i] - '0';
   }
     
   for (int i = 2;i >=0;i--) {
      int a = x * arr[i];
      printf("%d\n",a);
   }
   int y_int = arr[0] * 100 + arr[1] * 10 + arr[2];
   printf("%d\n", x * y_int);

   return 0;
}
