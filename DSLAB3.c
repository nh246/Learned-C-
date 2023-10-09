#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1000];
    int i, chars = 0, digits = 0, specials = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            chars++;
        } else if (isdigit(line[i])) {
            digits++;
        } else if (line[i] != ' ' && line[i] != '\n') {
            specials++;
        }
    }

    printf("Total characters: %d\n", chars);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specials);

    return 0;
}
