#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n); 

    int weight[100], height[100];
    int rank[100]; 

   
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1;
    }

  
    for (int i = 0; i < n; i++) {        
        for (int j = 0; j < n; j++) {     
            if (i == j) continue;         

            
            if (weight[j] > weight[i] && height[j] > height[i]) {
                rank[i]++; 
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d ", rank[i]); 
    }

    return 0;
}
