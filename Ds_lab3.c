#include<stdio.h>


int main()

{

    int DATA[100], N, i, BEG, END, ITEM, MID, LOC;

    printf("Enter the number of elements in array: ");

    scanf("%d", &N);


    //***YOUR ENTERED ELEMENTS MUST BE SORTED***

    printf("Enter %d elements now:\n", N);    

    for(i=1; i<=N; i++)

     {

        scanf("%d", &DATA[i]);

     }


    BEG=1, END=N, MID=((BEG+END)/2);

    printf("\nEnter the ITEM you want to search: ");

    scanf("%d", &ITEM);


    while((BEG<=END) && (DATA[MID]!=ITEM))

     {

        if(ITEM<DATA[MID])

         {

            END=MID-1;

         }

        else

         {

            BEG=MID+1;

         }

        MID=((BEG+END)/2);

     }


    if(DATA[MID]==ITEM)

     {

        LOC=MID;

        printf("ITEM %d found at LOC: %d\n", ITEM, LOC);

     }

    else

     {

        LOC=0;

        printf("ITEM %d not found! So LOC: %d\n", ITEM, LOC);

     }

    return 0;

}
