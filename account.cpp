#include<iostream>
using namespace std;

class Account{
    public:
    string accountNumber; // số tài khoản
    double balance; // số dư tài khoản

    void deposit(double amount){ // nạp tiền vào tài khoản
        balance += amount;
        cout<<"Deposited: "<<amount<<endl;
    
    }

    void withdrae (double amount){ // rút tiền từ tài khoản 
        if(amount>balance){
            cout<< "Insufficient balcance!"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdrew: "<<amount<<endl;
        }
    }
    void displayBalance(){ // hiển thị số dư tài khoản
        cout<< "Current balance: " <<balance<<endl;
    }
};

int main() {
    Account acc1;
    acc1.accountNumber="123456789";
    acc1.balance=1000.0;

    acc1.displayBalance();
    acc1.deposit(500.0);    
    acc1.displayBalance();
    acc1.withdrae(200.0);
    acc1.displayBalance();
    acc1.withdrae(1500.0); // thử rút tiền vượt quá số dư
    acc1.displayBalance();
    return 0;
}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra số dư hiện tại của tài khoản, số tiền đã nạp và số tiền đã rút.
Cấu trúc lớp đúng.      
Không tìm thấy lỗi logic.
có thể thêm cách tính lãi suất hàng năm dựa trên số dư tài khoản bằng cách thêm một phương thức để tính toán lãi suất dựa trên số dư hiện tại và tỷ lệ lãi suất.
có thể thêm tên chủ tài khoản để cung cấp thêm thông tin về tài khoản.
có thể thêm tên ngân hàng để cung cấp thông tin và các ngân hàng cho chuyển khoản qua lại không mất phí.
*/