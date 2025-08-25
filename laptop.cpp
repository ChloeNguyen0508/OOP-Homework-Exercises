#include<iostream>
using namespace std;

class Laptop{
    public:
    string brand;
    string model;
    int ram; // dung lượng ram (GB)
    int storage; // dung lượng ổ cứng (GB)

    void displayInfo(){
        cout<< "Brand: "<<brand<<endl;
        cout<< "Model: "<<model<<endl;
        cout<< "RAM: "<<ram<<" GB"<<endl;
        cout<< "Storage: "<<storage<<" GB"<<endl;

    }

    void checkRam(int requiredRAM){
        if(ram>= requiredRAM) {
            cout<<"This laptop has enough RAM to run the software."<<endl;
        }else{
        cout<<"This laptop does not have enough RAM to run the software."<<endl;
         }
    }

};

int main(){
    Laptop laptop1;
    laptop1.brand="Dell";
    laptop1.model="XPS 13";
    laptop1.ram =8;
    laptop1.storage=256;

    laptop1.displayInfo();
    laptop1.checkRam(16); // kiểm tra xem laptop có đủ RAM để chạy phần
    return 0;
}


/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra thông tin về thương hiệu, mẫu, dung lượng RAM và dung lượng ổ cứng của laptop, sau đó kiểm tra xem laptop có đủ RAM để chạy phần mềm yêu cầu hay không.
Cấu trúc lớp đúng.
Không tìm thấy lỗi logic.
có thể thêm cách kiểm tra xem laptop có đủ dung lượng lưu trữ để cài đặt phần mềm hay không bằng cách thêm một phương thức để so sánh dung lượng ổ cứng hiện tại với dung lượng yêu cầu của phần mềm.
có thể thêm hệ điều hành để cung cấp thêm thông tin về laptop
*/

