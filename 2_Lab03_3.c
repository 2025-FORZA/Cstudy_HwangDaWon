#include <stdio.h>
#include <string.h>

int main(void) {
    char word[1000000];
    int alp[26] = { 0 };
    int max_cnt = 0;      
    int max_index = 0;   
    int same_max = 0;     

    scanf("%s", word);
    int len = strlen(word); 

  
    for (int i = 0; i < len; i++) {
        char c = word[i];
        if (c >= 'a' && c <= 'z') c -= 32;
        alp[c - 'A']++;
    }


    for (int i = 0; i < 26; i++) {
        if (alp[i] > max_cnt) {
            max_cnt = alp[i];
            max_index = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alp[i] == max_cnt) same_max++;
    }

    if (same_max == 1) printf("%c\n", max_index + 'A');
    else              printf("?\n");

    return 0;
}
