#include <stdio.h>

typedef struct p {
    int age;
    char name[201];
} w;

w member[100001];

int main()
{
    int num;
    scanf("%d", &num);
    for (int a = 0; a < num; a++)
    {
        scanf("%d %s", &member[a].age, member[a].name);
    }
    for (int a = 1; a <= 200; a++)
    {
        for (int b = 0; b < num; b++)
        {
            if (a == member[b].age)
                printf("%d %s\n", member[b].age, member[b].name);
        }
    }
    return 0;
}
