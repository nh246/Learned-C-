#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100

// Define a structure for storing book information
typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int publicationYear;
} Book;

// Function prototypes
void displayMenu();
void addBook(Book books[], int *bookCount);
void viewBooks(Book books[], int bookCount);
void searchBookByTitle(Book books[], int bookCount);

int main() {
    Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        getchar(); // Ignore newline character

        switch (choice) {
            case 1:
                addBook(books, &bookCount);
                break;
            case 2:
                viewBooks(books, bookCount);
                break;
            case 3:
                searchBookByTitle(books, bookCount);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to display menu options
void displayMenu() {
    printf("1. Add a new book\n");
    printf("2. View all books\n");
    printf("3. Search for a book by title\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

// Function to add a new book
void addBook(Book books[], int *bookCount) {
    if (*bookCount >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    Book newBook;
    printf("Enter the title of the book: ");
    fgets(newBook.title, MAX_TITLE, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove newline character

    printf("Enter the author of the book: ");
    fgets(newBook.author, MAX_AUTHOR, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove newline character

    printf("Enter the publication year of the book: ");
    scanf("%d", &newBook.publicationYear);
    getchar(); // Ignore newline character

    books[*bookCount] = newBook;
    (*bookCount)++;
    printf("Book added successfully.\n");
}

// Function to view all books
void viewBooks(Book books[], int bookCount) {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }

    printf("List of Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Title: %s, Author: %s, Publication Year: %d\n", books[i].title, books[i].author, books[i].publicationYear);
    }
}

// Function to search for a book by title
void searchBookByTitle(Book books[], int bookCount) {
    char title[MAX_TITLE];
    printf("Enter the title of the book you want to search for: ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = 0; // Remove newline character

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book found:\n");
            printf("Title: %s, Author: %s, Publication Year: %d\n", books[i].title, books[i].author, books[i].publicationYear);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}
