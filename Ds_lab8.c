#include<stdio.h>
int main()
{
int LA[100], N, K, J, i, ITEM;
printf("Enter the number of elements in array: ");
scanf("%d", &N);
printf("Enter %d elements now:\n", N);
for(i=1; i<=N; i++)
{
scanf("%d", &LA[i]);
}
printf("Enter the position of the item to insert: ");
scanf("%d", &K);
printf("Enter the item you want to insert: ");
scanf("%d", &ITEM);
J=N;
while(J>=K)
{
LA[J+1]=LA[J];
J=J-1;
}
LA[K]=ITEM;
N=N+1;
printf("After inserting:\n");
for(i=1; i<=N; i++)
{
printf("%d\n", LA[i]);
}
printf("\n\nEnter the position of the item to delete: ");
scanf("%d", &K);
ITEM=LA[K];
for(J=K; J<=N-1; J++)
{
LA[J]=LA[J+1];
}
N=N-1;
printf("Your deleted item: %d", ITEM);
printf("\nAfter deleting:\n");
for(i=1; i<=N; i++)
{
printf("%d\n", LA[i]);
}
return 0;
}