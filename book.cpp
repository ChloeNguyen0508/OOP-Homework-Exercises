#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;

    void displayInfo(){
        cout<< "Title: "<<title<<endl;
        cout<< "Author: "<<author<<endl;

    }
};

int main(){
    Book book1;
    book1.title="C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.displayInfo();
    return 0;
}

/*
1.The code runs, no syntax errors.
When run, the program will print out information about the book's title and author.
2.Class structure is correct.
3. Thêm phần năm sản xuất sách để cung cấp thêm thông tin về cuốn sách
*/