#include<iostream>
using namespace std;    

class Person{
    public:
    string name;
    int age;
    string address;

    void displayInfo(){
        cout<< "Name: "<<name<<endl;
        cout<< "Age: "<<age<<endl;
        cout<< "Address: "<<address<<endl;

    }
    bool isAdult(){
        return age>=18;
    }
};

int main(){
    Person person1;
    person1.name="John Doe";
    person1.age=20;
    person1.address="123 Main St";
    person1.displayInfo();
    if(person1.isAdult()){
        cout<<"This person is an adult."<<endl;
    }else{
        cout<<"This person is not an adult."<<endl;
    }
    return 0;
}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra thông tin về tên, tuổi và địa chỉ của người đó, sau đó kiểm tra xem người đó có phải là người trưởng thành hay không.
Cấu trúc lớp đúng.  
Không tìm thấy lỗi logic.
có thể thêm số điện thoại để liên lạc

*/