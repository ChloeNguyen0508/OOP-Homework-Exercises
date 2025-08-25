#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    public:
    double radius;

    double circumference(){ //chu vi hinh tron
        return 2*M_PI*radius;

    }
    double area(){ // dien tich hinh tron
        return M_PI*radius*radius;
    }
};

int main(){
    Circle circle1;
    cout<<"Nhập bán kính hình tròn: ";
    cin>>circle1.radius;

    cout<<"Chu vi hình tròn: "<<circle1.circumference()<<endl;
    cout<<"Diện tích hình tròn: "<<circle1.area()<<endl;
    return 0;

}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra chu vi và diện tích của hình tròn dự
a trên bán kính nhập vào.
Cấu trúc lớp đúng.
Không tìm thấy lỗi logic.
có thể thêm cách tính đường kính hình tròn bằng cách thêm một phương thức để tính toán đường kính dựa trên bán kính hiện tại.
có thể thêm màu sắc để cung cấp thêm thông tin về hình tròn
*/