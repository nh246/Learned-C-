#include <stdio.h>

int main() {
    int day, month, year;

    // Get birthdate input
    printf("Enter your birthdate (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Print the birthdate
    printf("Your birthdate is: %d/%d/%d\n", day, month, year);

    return 0;
}
