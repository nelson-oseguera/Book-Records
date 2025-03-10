#include "UpdatedBook.h" 
#include <iostream> 

// Constructor: initializes author, title, and edition
UpdatedBook::UpdatedBook(const std::string& author, const std::string& title, int edition)
    : Book(author, title), edition(edition) {}

// Destructor
UpdatedBook::~UpdatedBook() {}

// Get the edition of the book
int UpdatedBook::getEdition() const {
    return edition;
}

// Print the book details including edition
void UpdatedBook::printBook() const {
    Book::printBook(); // Call the printBook method of the base class (Book)
    // Print the edition
    std::cout << "Edition: " << edition << std::endl;
}
