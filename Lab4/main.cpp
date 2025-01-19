#include<iostream>
#include<string>

using namespace std;

class ATM{
public:
    void initBalance(float amount);
    void showBalance();
    void deposit(float amount);
    bool withdraw(float amount);
    int getTransactions();

private:
    float balance;
    int numOfTransactions;

};

int main()
{
    ATM atm_obj;
    atm_obj.initBalance(250);
    atm_obj.showBalance();
    atm_obj.deposit(250);
    /*
    atm_obj.balance=250;
    atm_obj.showBalance();
    atm_obj.deposit(250);
    atm_obj.showBalance();
    */
    cout<<atm_obj.withdraw(100)<<endl;

    atm_obj.showBalance();

    cout<<atm_obj.getTransactions()<<endl;


}

void ATM::initBalance(float amount)
{
    balance = amount;
    numOfTransactions=0;
}

void ATM::showBalance()
{
    cout<<balance<<endl;
}

void ATM::deposit(float amount)
{
    balance+=amount;
    numOfTransactions++;
}

bool ATM::withdraw(float amount)
{
    if (balance>=amount)
    {
        balance-=amount;
        cout<<"remaining balance = "<<balance<<endl;
        numOfTransactions++;
        return true;
    }else{

        return false;
    }

}

int ATM::getTransactions()
{
    return numOfTransactions;
}
