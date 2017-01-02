// # Reflection

// - Practice for Abstract Base Class

// # Problem

// Objective
// Today, we're taking what we learned yesterday about Inheritance and extending
// it to Abstract Classes. Because this is a very specific Object-Oriented concept,
// submissions are limited to the few languages that use this construct.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Task
// Given a Book class and a Solution class, write a MyBook class that does the following:
//
// Inherits from Book
// Has a parameterized constructor taking these  parameters:
// string
// string
// int
// Implements the Book class' abstract display() method so it prints these  lines:
// , a space, and then the current instance's .
// , a space, and then the current instance's .
// , a space, and then the current instance's .
// Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.: ) when declaring MyBook or your code will not execute.

// # Initial solution

using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};


class MyBook : public Book
{
private:
    int m_price;

public:
    MyBook(string title, string author, int price) : Book(title, author) {
        m_price = price;
    }

    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << m_price << endl;
    }
};

// # Improved solution
