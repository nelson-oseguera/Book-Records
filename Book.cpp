#include "Book.h"
#include <iostream>

// Constructor: initializes author and title
Book::Book(const std::string& author, const std::string& title)
    : author(author), title(title) {}

// Constructor with default author ("unknown")
Book::Book(const std::string& title) : author("unknown"), title(title) {}

// Destructor
Book::~Book() {}

// Get the author and title of the book
std::string Book::getAuthorAndTitle() const {
    return author + " - " + title;
}

// Print the author and title of the book
void Book::printBook() const {
    std::cout << "Author: " << author << "\nTitle: " << title << std::endl;
}
