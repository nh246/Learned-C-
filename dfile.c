#include <stdio.h>

int main() {
    const char *filename = "file_to_delete.txt";

    // Attempt to delete the file
    if (remove(filename) == 0) {
        printf("File deleted successfully.\n");
    } else {
        perror("Error deleting the file");
    }

    return 0;
}
