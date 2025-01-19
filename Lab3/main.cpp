#include <iostream>
using namespace std;

class ATM{
public:
    float balance;
    void showBalance();
    void deposit(float amount); //prototype
    bool withdraw(float amount);
};

void ATM::showBalance() { //definition
     cout<<balance<<endl;
}
void ATM::deposit(float amount) {
    balance+=amount;
}

bool ATM::withdraw(float amount) {
    if(amount>balance)
    {
        return false;
    }else{
        balance-=amount;
        return true;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    ATM object1;
    object1.balance = 250;
    object1.showBalance();
    object1.deposit(250);
    object1.showBalance();
    object1.withdraw(400);
    object1.showBalance();
    object1.withdraw(400);
    object1.showBalance();

    if(object1.withdraw(400)==false){
        cout<<"There's not enought amount"<<endl;
        cout<<"you have only "<<endl;
        object1.showBalance();
    }

    return 0;
}
