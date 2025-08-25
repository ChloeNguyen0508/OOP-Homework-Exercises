#include<iostream>
using namespace std;

class Rectangle{
public:
int width;
int height;

int calculateArea(){
    return width*height;
}
};

int main(){
    Rectangle rect1;
    rect1.width=5;
    rect1.height=10;
    cout<< "Area: "<<rect1.calculateArea()<<endl;
    return 0;
}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra diện tích của hình chữ nhật.
Cấu trúc lớp đúng.
Không tìm thấy lỗi logic.
có thể thêm cách tính chu vi hình chữ nhật bằng cách thêm một phương thức để tính toán chu vi dựa trên chiều dài và chiều rộng hiện tại.
có thể thêm phương thức để kiểm tra xem hình chữ nhật có phải là hình vuông hay không bằng cách so sánh chiều dài và chiều rộng.

*/