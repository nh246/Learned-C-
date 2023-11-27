#include<stdio.h>
#include<string.h>
int main()
{
int K=0, MAX, S, R, L, INDEX=0;
char T[100], P[100];
printf("Enter a text: ");
scanf("%s", T);
printf("Enter the pattern: ");
scanf("%s", P);
S=strlen(T);
R=strlen(P);
MAX=S-R+1;
while(K<MAX)
{
for(L=0; L<R; L++)
{
if(P[L]!=T[K+L]) break;
else
{
if(L==R-1) INDEX=K+1; //Pattern Matched
}
}
if(INDEX>0) break; //Success
K=K+1;
}
if(INDEX==0) //Failure
printf("\nPattern is not matched.");
else
printf("\nPattern matched & it's INDEX is: %d", INDEX);
return 0;
}
