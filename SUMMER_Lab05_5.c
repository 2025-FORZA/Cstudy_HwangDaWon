#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int cards[100][100];  
    int score[100] = {0};
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &cards[i][j]);
        }
        for(int j = 0; j < M - 1; j++) {
            int max_idx = j;
            for(int k = j + 1; k < M; k++) {
                if(cards[i][k] > cards[i][max_idx]) {
                    max_idx = k;
                }
            }
            int temp = cards[i][j];
            cards[i][j] = cards[i][max_idx];
            cards[i][max_idx] = temp;
        }
    }
    for(int round = 0; round < M; round++) {
        int max_val = 0;
        for(int player = 0; player < N; player++) {
            if(cards[player][round] > max_val) {
                max_val = cards[player][round];
            }
        }
        for(int player = 0; player < N; player++) {
            if(cards[player][round] == max_val) {
                score[player]++;
            }
        }
    }
    int max_score = 0;
    for(int i = 0; i < N; i++) {
        if(score[i] > max_score) max_score = score[i];
    }
    for(int i = 0; i < N; i++) {
        if(score[i] == max_score) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    return 0;
}
