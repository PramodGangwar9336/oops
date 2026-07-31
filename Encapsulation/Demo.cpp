//Simple Definition
//1 Encapsulation ka matlab hai data (variables) aur methods (functions) ko ek hi
// class ke andar band (wrap) kar dena, aur data ko direct access karne ke bajay 
//controlled access dena

//2 data security 
//Variables ko private bana dete hain, taki koi bhi unhe directly change na kar sake.



#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    int deposit(int amount) {
        if (amount < 0) {
            return -1;
        }

        balance += amount;
        return balance;
    }

    int withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
            return -1;
        }

        balance -= amount;
        return balance;
    }

    int getBalance() {
        return balance;
    }

    void setBalance(int b) {
        balance = b;
    }
};

int main() {
    BankAccount b1;

    b1.deposit(1000);
    b1.withdraw(200);

    cout << "Current Balance = " << b1.getBalance() << endl;

    return 0;
}