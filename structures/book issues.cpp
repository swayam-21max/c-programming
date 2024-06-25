#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int numBooks;
};

// Function prototypes
void displayBookInfo(struct Book book);
void displayAllBooks(struct Library lib);
void addNewBook(struct Library *lib);
void displayBooksByAuthor(struct Library lib, char author[]);
void displayNumBooksByTitle(struct Library lib, char title[]);
int getTotalBooks(struct Library lib);
void issueBook(struct Library *lib, int accessionNumber);

int main() {
    struct Library library;
    library.numBooks = 0; // Initialize number of books to 0

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all books by a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAllBooks(library);
                break;
            case 2:
                addNewBook(&library);
                break;
            case 3:
                // Assuming author's name is entered without spaces
                char author[50];
                printf("Enter author's name: ");
                scanf("%s", author);
                displayBooksByAuthor(library, author);
                break;
            case 4:
                char title[100];
                printf("Enter book title: ");
                scanf("%s", title);
                displayNumBooksByTitle(library, title);
                break;
            case 5:
                printf("Total number of books in the library: %d\n", getTotalBooks(library));
                break;
            case 6:
                int accessionNumber;
                printf("Enter accession number of book to issue: ");
                scanf("%d", &accessionNumber);
                issueBook(&library, accessionNumber);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 0 and 6.\n");
        }
    } while (choice != 0);

    return 0;
}

void displayBookInfo(struct Book book) {
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Issued: %s\n", book.isIssued ? "Yes" : "No");
}

void displayAllBooks(struct Library lib) {
    printf("Books in the library:\n");
    for (int i = 0; i < lib.numBooks; i++) {
        displayBookInfo(lib.books[i]);
    }
}

void addNewBook(struct Library *lib) {
    if (lib->numBooks >= MAX_BOOKS) {
        printf("Cannot add more books. Library is full.\n");
        return;
    }

    struct Book newBook;
    printf("Enter details of new book:\n");
    printf("Accession Number: ");
    scanf("%d", &newBook.accessionNumber);
    printf("Author: ");
    scanf("%s", newBook.author);
    printf("Title: ");
    scanf("%s", newBook.title);
    newBook.isIssued = 0; // Set as not issued initially

    lib->books[lib->numBooks] = newBook;
    lib->numBooks++;
    printf("New book added successfully.\n");
}

void displayBooksByAuthor(struct Library lib, char author[]) {
    printf("Books by author %s:\n", author);
    int found = 0;
    for (int i = 0; i < lib.numBooks; i++) {
        if (strcmp(lib.books[i].author, author) == 0) {
            displayBookInfo(lib.books[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by author %s.\n", author);
    }
}

void displayNumBooksByTitle(struct Library lib, char title[]) {
    int count = 0;
    for (int i = 0; i < lib.numBooks; i++) {
        if (strcmp(lib.books[i].title, title) == 0) {
            count++;
        }
    }
    printf("Number of books with title %s: %d\n", title, count);
}

int getTotalBooks(struct Library lib) {
    return lib.numBooks;
}

void issueBook(struct Library *lib, int accessionNumber) {
    for (int i = 0; i < lib->numBooks; i++) {
        if (lib->books[i].accessionNumber == accessionNumber) {
            if (lib->books[i].isIssued) {
                printf("Book already issued.\n");
            } else {
                lib->books[i].isIssued = 1;
                printf("Book issued successfully.\n");
            }
            return;
        }
    }
}


