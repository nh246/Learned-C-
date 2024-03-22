#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a structure for storing book information
struct Book {
    string title;
    string author;
    int publicationYear;
};

// Function to display menu options
void displayMenu() {
    cout << "1. Add a new book\n";
    cout << "2. View all books\n";
    cout << "3. Search for a book by title\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

// Function to add a new book
void addBook(vector<Book>& books) {
    Book newBook;
    cout << "Enter the title of the book: ";
    getline(cin, newBook.title);
    cout << "Enter the author of the book: ";
    getline(cin, newBook.author);
    cout << "Enter the publication year of the book: ";
    cin >> newBook.publicationYear;
    cin.ignore(); // Ignore newline character
    books.push_back(newBook);
    cout << "Book added successfully.\n";
}

// Function to view all books
void viewBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    cout << "List of Books:\n";
    for (const auto& book : books) {
        cout << "Title: " << book.title << ", Author: " << book.author << ", Publication Year: " << book.publicationYear << endl;
    }
}

// Function to search for a book by title
void searchBookByTitle(const vector<Book>& books) {
    string title;
    cout << "Enter the title of the book you want to search for: ";
    getline(cin, title);
    bool found = false;
    for (const auto& book : books) {
        if (book.title == title) {
            cout << "Book found:\n";
            cout << "Title: " << book.title << ", Author: " << book.author << ", Publication Year: " << book.publicationYear << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book not found.\n";
    }
}

int main() {
    vector<Book> books;
    int choice;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Ignore newline character
        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                viewBooks(books);
                break;
            case 3:
                searchBookByTitle(books);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
