#pragma once
#include <iostream>
#include <vector>
#include "AccountCls.h"
using namespace std;

class Client {
private:
    string _Name;
    string _NationalID;
    vector<Account*> _Accounts;

public:
    Client(const string& name, const string& nationalid)
        : _Name(name), _NationalID(nationalid) {
    }

    ~Client() {
        
        for (auto acc : _Accounts) delete acc;
    }

    string GetName() const { return _Name; }
    string GetNationalID() const { return _NationalID; }

    void AddAccount(Account* account) { _Accounts.push_back(account); }

    Account* FindAccount(int accountnumber) {
        for (auto acc : _Accounts) {
            if (acc->GetAccountNumber() == accountnumber)
                return acc;
        }
        return nullptr;
    }

    void ShowAllAccounts() const {
        cout << "Accounts for " << _Name << ":\n";
        for (auto acc : _Accounts) {
            cout << "Account Number: " << acc->GetAccountNumber()
                << " | Balance: " << acc->GetBalance() << endl;
        }
    }
};


//to try the code

/* 
	Account acc1(101, 500);
	Account acc2(102, 500);
	Client cl1("ahmed", "01112121");
	cl1.AddAcount(&acc1);
	cl1.AddAcount(&acc2);
	Account* a = cl1.FindAccount(101);
	if (a) a->Deposit(200);
	a = cl1.FindAccount(1022);
	if (a) a->Withdraw(300);
	cl1.ShowAllAccounts();


*/


