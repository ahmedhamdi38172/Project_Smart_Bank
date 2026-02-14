#pragma once
#include <iostream>
using namespace std;

class Account {
private:
    int _AccountNumber;
    double _Balance;

public:
    Account(int accountnumber, double balance)
        : _AccountNumber(accountnumber), _Balance(balance) {
    }

    int GetAccountNumber() const { return _AccountNumber; }
    double GetBalance() const { return _Balance; }

    bool Deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid Deposit Amount\n";
            return false;
        }
        _Balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << _Balance << endl;
        return true;
    }

    bool Withdraw(double amount) {
        if (amount > _Balance) {
            cout << "Insufficient Balance\n";
            return false;
        }
        _Balance -= amount;
        cout << "Withdrawn: " << amount << ", New Balance: " << _Balance << endl;
        return true;
    }
};


	/*
	
        // 1?? ????? ????
        Account acc1(101, 500);  // ??? ?????? 101? ???? ??????? 500

        // 2?? ??? ????????? ????????
        cout << "Account Number: " << acc1.GetAccountNumber() << endl;
        cout << "Initial Balance: " << acc1.GetBalance() << endl;

        // 3?? ????? Deposit
        cout << "\nDepositing 200..." << endl;
        acc1.Deposit(200);
        cout << "Balance after deposit: " << acc1.GetBalance() << endl;

        // 4?? ????? Withdraw
        cout << "\nWithdrawing 100..." << endl;
        acc1.Withdraw(100);
        cout << "Balance after withdrawal: " << acc1.GetBalance() << endl;

        // 5?? ????? ??? ???? ?? ??????
        cout << "\nTrying to withdraw 700..." << endl;
        acc1.Withdraw(700);  // ????? ????? "Insufficient balance!"

        return 0;
	*/



