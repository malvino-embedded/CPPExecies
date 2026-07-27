/*
  Exercise 3: Book Class For Data Retrieval 

  Problem: Design a Book class with private members std::string title, std::string author, and std::string isbn. Include a constructor to initialize them. Implement a public method get_details() that returns a single formatted std::string containing all the book’s information.

Expected Output:

Book Record:
Title: The C++ Programming Language | Author: Bjarne Stroustrup | ISBN: 0321563840

*/
#include<iostream>

class Book{

  private:
    std::string title;
    std::string author;
    std::string isbn;

  public:
    Book(std::string t,std::string a,std::string i):title(t),author(a),isbn(i){}
    
    std::string get_details() const
    {
      return "Title: " + title + " | Author: " + author + " | ISBN: " + isbn;
    }
};


int main(void)
{
  Book myBook("The c++ Programming Language","Bjarne Stroustrup","0321563840");

  std::cout << "Book Record: " << std::endl << myBook.get_details();

  return 0;
}

  
