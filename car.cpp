#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int year;

    void displayInfo(){
        cout<< "brand: "<<brand<<endl;
        cout<< "Year: "<<year<<endl;

    }

};

int main(){
    Car car1;
    car1.brand= "Toyota";
    car1.year = 2020;
    car1.displayInfo();
}

/*
1.The code runs, no syntax errors.
When run, the program will print out information about the vehicle's make and year.
2.Class structure is correct. 
3. No logical errors found.
4. Can apply how much kilometers a car has driven by adding a new attribute and method to the class, and method to calculate age of the car.
*/