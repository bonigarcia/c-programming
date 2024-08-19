#include <stdio.h>

void display_menu();
void borrow_book();
void return_book();
void view_books();

int main() {
    int choice;
    do {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            borrow_book();
            break;
        case 2:
            return_book();
            break;
        case 3:
            view_books();
            break;
        case 4:
            printf("Exiting the library system.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

void display_menu() {
    printf("Library Management System\n");
    printf("1. Borrow Book\n");
    printf("2. Return Book\n");
    printf("3. View Books\n");
    printf("4. Exit\n");
}

void borrow_book() {
    printf("Borrowing a book...\n");
    // Implementation details will be added later
}

void return_book() {
    printf("Returning a book...\n");
    // Implementation details will be added later
}

void view_books() {
    printf("Viewing all books...\n");
    // Implementation details will be added later
}
