#include <iostream>
using namespace std;

class BankACC
{
public:
    int account_no;
    double account_balance;

    virtual void Deposite(int account_no, double deposited_ammount) = 0;
    virtual void Withdraw(int account_no, double withdraw_ammount) = 0;
    virtual void Display() = 0;
};

class SavingAccount : public BankACC
{
public:
    int accountno;
    double accountbalance = 0;

    void Deposite(int account_no, double deposited_ammount) override
    {
        accountno = account_no;
        this->accountbalance = accountbalance + deposited_ammount;
        cout << "Congratulation Your Account Creadited by :- " << deposited_ammount << endl;
        // cout << "Your Account Balance is :- " << account_balance + deposited_ammount << endl;
    }
    void Withdraw(int account_no, double withdraw_ammount) override
    {
        if (withdraw_ammount < accountbalance)
        {
            accountbalance = accountbalance - withdraw_ammount;
            cout << "Your Account Debited by :- " << withdraw_ammount << endl;
            // cout << "Your Account Balance is :- " << account_balance - withdraw_ammount << endl;
        }
        else
        {
            cout << "Your account balance is Low, Enter Sufficient Ammount" << endl;
            cout << "Your Account Balance is :- " << accountbalance << endl;
        }
    }

    void Display() override
    {
        cout << "-----------Your Accout Info------------" << endl;
        cout << "Your Account Number Is :- " << accountno << endl;
        cout << "Your Account Balance Is :- " << accountbalance << endl;
    }
};

int main()
{
    SavingAccount account;
    account.Deposite(111213, 500);
    account.Deposite(111213, 500);
    account.Withdraw(111213, 300);
    // account.Withdraw(111213, 550);
    account.Display();
}