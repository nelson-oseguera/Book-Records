#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    // Constructors
    Book(const std::string& author, const std::string& title); // Constructor with author and title
    Book(const std::string& title); // Constructor with default author
    virtual ~Book(); // Destructor (virtual to allow proper subclass destruction)

    // Virtual functions
    virtual std::string getAuthorAndTitle() const; // Get the author and title of the book
    virtual void printBook() const; // Print the author and title of the book

protected:
    // Member variables
    std::string author; // Author of the book
    std::string title; // Title of the book
};

#endif // BOOK_H
