#include "OutOfPrintBook.h"
#include <iostream>

// Constructor: initializes author, title, last printed date, and edition
OutOfPrintBook::OutOfPrintBook(const std::string& author, const std::string& title, const Date& lastPrinted, int edition)
    : Book(author, title), lastPrinted(lastPrinted), edition(edition) {}

// Destructor
OutOfPrintBook::~OutOfPrintBook() {}

// Get the last printed date
Date OutOfPrintBook::getLastPrinted() const {
    return lastPrinted;
}

// Print the book details including last printed date and edition
void OutOfPrintBook::printBook() const {
    Book::printBook(); // Call the printBook method of the base class (Book)
    // Print the edition
    std::cout << "Edition: " << edition << std::endl;
    // Print the last printed date in day/month/year format
    std::cout << "Last Printed Date: " << lastPrinted.month << "/" << lastPrinted.day << "/" << lastPrinted.year << std::endl;
}
