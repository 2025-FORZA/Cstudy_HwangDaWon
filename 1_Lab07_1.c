# include <stdio.h>
int main() {
	int n, loc, cowN;
	int count=0;
	int cow[11];

	for (int i = 1; i <= 10; i++) {
		cow[i] = -1;
	}

	scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
     
        scanf("%d %d", &cowN, &loc);

        if (cow[cowN] == -1) {
            cow[cowN] = loc;
        }
       
        else if (cow[cowN] != loc) {
            count++; 
            cow[cowN] = loc; 
        }
       
    }

  
    printf("%d\n", count);


	return 0;
}
