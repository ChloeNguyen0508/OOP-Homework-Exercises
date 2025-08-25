#include<iostream>
using namespace std;

class Course{
    public:
    string courseName;
    string courseCode;
    int credits;

    void displayInfo(){
        cout<< "Course Name: "<<courseName<<endl;
        cout<< "Course Code: "<<courseCode<<endl;
        cout<< "Credits: "<<credits<<endl;

    }

    bool isHighCredit(){
        return credits>3;
    
    }
};

int main(){
    Course course1;
    course1.courseName="Object Oriented Programming";
    course1.courseCode="CS202";
    course1.credits=4;

    course1.displayInfo();
    if(course1.isHighCredit()){
        cout<<"This is a high credit course."<<endl;
    }else{
        cout<<"This is not a high credit course."<<endl;
    }
    return 0;
}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra thông tin về tên khóa học, mã khóa học và số tín chỉ của khóa học, sau đó kiểm tra xem khóa học có phải là khóa học tín chỉ cao hay không.
Cấu trúc lớp đúng.  
Không tìm thấy lỗi logic.
có thể thêm tên giảng viên môn học, mã số giảng viên để liên lạc
có thể thêm phương thức xác định khóa học có bắt buộc hay không
*/