#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    double grade;

    void displayInfo(){
        cout<< "Name: "<<name<<endl;
        cout<< "Grade: "<<grade<<endl;

    }
};

int main(){
    Student student1;
    student1.name="John";
    student1.grade =8.5;
    student1.displayInfo();
    return 0;
}

/*
1.The code runs, no syntax errors.
When run, the program will print out information about the student's name and grade.
2.Class structure is correct. 
3. No logical errors found.
4. Can apply how to determine if the student has passed or failed by adding a method to the class that checks
provide score of the student 
*/