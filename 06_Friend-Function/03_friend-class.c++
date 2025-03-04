#include <iostream>
using namespace std;

class BOOK
{
private:
    int book_id;
    string book_name;
    string author_name;
    int noOf_copy;

public:
    BOOK(int id, string bookname, string authorname, int copies) : book_id(id), book_name(bookname), author_name(authorname), noOf_copy(copies)
    {
    }

    friend class LIBRARY;
};

class LIBRARY
{
public:
    void DisplayBookData(BOOK book1)
    {
        cout << "The ID Of Book Is :- " << book1.book_id << endl;
        cout << "The Name Of Book Is :- " << book1.book_name << endl;
        cout << "The Author name Of Book Is :- " << book1.author_name << endl;
        cout << "The No Of Copies Is :- " << book1.noOf_copy << endl;
    }
};

int main()
{
    BOOK book1(101, "Java Programming", "XYZ", 154);
    LIBRARY lbr1;
    lbr1.DisplayBookData(book1);
}