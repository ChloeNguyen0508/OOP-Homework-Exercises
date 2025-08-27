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

int main() 
    // Nhập vào thông tin người dùng 
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


