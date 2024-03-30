#include <iostream>
using namespace std;
enum account_type
{
    saving = 1,
    current,
    DMAT
};
class InsufficientFunds
{
private:
    int accid;
    double cur_balance;
    double withdraw_amount;

public:
    InsufficientFunds(int accid, double cur_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->cur_balance = cur_balance;
        this->withdraw_amount = withdraw_amount;
    }
    void display()
    {
        cout << "....INSUFFICIENT BALANCE...." << endl;
        cout << "ACCOUNT ID:" << accid << endl;
        cout << "ACCOUNT CURRENT BALANCE:" << cur_balance << endl;
        cout << "ACCOUNT WITHDRAWL BALANCE:" << withdraw_amount << endl;
    }
};
class Account
{
private:
    int custId;
    account_type type;
    double balance;

public:
    Account()
    {
        this->custId = 0;
        this->type = saving;
        this->balance = 0;
    }
    Account(int custId, account_type type, double balance)
    {
        this->custId = custId;
        this->type = type;
        this->balance = balance;
    }
    void setCustId(int custId)
    {
        this->custId = custId;
    }
    void setType(account_type type)
    {
        this->type = type;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }
    int getCustId()
    {
        return custId;
    }
    account_type getAccountType()
    {
        return type;
    }
    double getBalance()
    {
        return balance;
    }



};