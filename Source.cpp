#include "OutOfPrintBook.h"
#include <iostream>

int main() {
    int numBooks;
    std::cout << "Enter the number of out-of-print books: ";
    std::cin >> numBooks;

    // Create a dynamic array of pointers to OutOfPrintBook objects
    OutOfPrintBook** books = new OutOfPrintBook*[numBooks];

    // Loop to input details for each book
    for (int i = 0; i < numBooks; ++i) {
        std::string author, title;
        Date lastPrinted;
        int edition;

        std::cout << "Enter author for book " << i + 1 << ": ";
        std::cin.ignore(); // Ignore the newline character left in the buffer
        std::getline(std::cin, author); // Get author's name

        std::cout << "Enter title for book " << i + 1 << ": ";
        std::getline(std::cin, title); // Get book's title

        std::cout << "Enter edition for book " << i + 1 << ": ";
        std::cin >> edition; // Get edition of the book

        std::cout << "Enter last printed month for book " << i + 1 << ": ";
        std::cin >> lastPrinted.month; // Get month of last printed date

        std::cout << "Enter last printed day for book " << i + 1 << ": ";
        std::cin >> lastPrinted.day; // Get day of last printed date

        std::cout << "Enter last printed year for book " << i + 1 << ": ";
        std::cin >> lastPrinted.year; // Get year of last printed date

        // Create a new OutOfPrintBook object and store its pointer in the array
        books[i] = new OutOfPrintBook(author, title, lastPrinted, edition);
    }

    // Display details of each book
    for (int i = 0; i < numBooks; ++i) {
        std::cout << "\nBook " << i + 1 << " Details:" << std::endl;
        books[i]->printBook(); // Print details of the book
    }

    // Clean up memory
    for (int i = 0; i < numBooks; ++i) {
        delete books[i]; // Delete each OutOfPrintBook object
    }
    delete[] books; // Delete the array of pointers

    return 0;
}
