#include <stdio.h>

#define sentinel 30

int main(void)
{
    int sum = 0;
    int score;
    printf("Please Enter first score (or %d to quit)>", sentinel);
    scanf("%d", &score);
    while (score != sentinel)
    {
        sum += score;
        printf("ether next score (%d to quit)>", sentinel);
        scanf("%d", &score);
    }
    printf("\nsum of exam scores is %d\n", sum);
    return 0;
}
