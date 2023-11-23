#include<stdio.h>

int main()
{
    int DATA[100], N, i, K;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the elements:\n");

    for(i=1; i<=N; i++)
    {
        scanf("%d", &DATA[i]);
    }

    int MIN = DATA[1], MAX = DATA[1];
    int MIN_LOC = 1, MAX_LOC = 1;

    for(K=2; K<=N; K++)
    {
        if(MIN>DATA[K])
        {
            MIN = DATA[K];
            MIN_LOC = K;
        }
        if(MAX<DATA[K])
        {
            MAX = DATA[K];
            MAX_LOC = K;
        }
    }

    printf("MIN = %d, LOC = %d", MIN, MIN_LOC);
    printf("\nMAX = %d, LOC = %d", MAX, MAX_LOC);

    return 0;
}
