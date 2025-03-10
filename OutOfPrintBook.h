#ifndef OUTOFPRINTBOOK_H
#define OUTOFPRINTBOOK_H

#include "Book.h"
#include <string>

// Define a structure for storing date information
struct Date {
    int day; // Day of the month
    int month; // Month of the year
    int year; // Year
};

class OutOfPrintBook : public Book { // Inherits from the Book class
public:
    // Constructors
    OutOfPrintBook(const std::string& author, const std::string& title, const Date& lastPrinted, int edition); // Constructor with author, title, last printed date, and edition
    ~OutOfPrintBook(); // Destructor

    // Getter for last printed date
    Date getLastPrinted() const;

    // Override of the printBook method from the base class
    void printBook() const override;

private:
    Date lastPrinted; // Last printed date of the book
    int edition; // Edition of the book
};

#endif // OUTOFPRINTBOOK_H
