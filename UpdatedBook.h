#ifndef UPDATEDBOOK_H
#define UPDATEDBOOK_H

#include "Book.h"

class UpdatedBook : public Book { // Inherits from the Book class
public:
    // Constructor
    UpdatedBook(const std::string& author, const std::string& title, int edition); // Constructor with author, title, and edition
    ~UpdatedBook(); // Destructor

    // Getter for edition
    int getEdition() const;

    // Override of the printBook method from the base class
    void printBook() const override;

private:
    int edition; // Edition of the book
};

#endif // UPDATEDBOOK_H
