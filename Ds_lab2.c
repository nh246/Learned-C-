//DS-2: Linear Search

#include<stdio.h>

int main()
{
    int DATA[100], N, i, K, ITEM;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the elements:\n");

    for(i=1; i<=N; i++)
    {
        scanf("%d", &DATA[i]);
    }

    printf("Enter the ITEM: ");
    scanf("%d", &ITEM);

    int LOC = 0;

    for(K=1; K<=N; K++)
    {
        if(ITEM==DATA[K])
        {
            LOC = K;
        }
    }

    if(LOC==0)
    {
        printf("ITEM not found.");
    }
    else
    {
        printf("ITEM found in LOC = %d", LOC);
    }


    return 0;
}
