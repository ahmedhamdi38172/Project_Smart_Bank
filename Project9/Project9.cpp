//This is a simple Bank Management system implemented in C++ using OOP

#include <iostream>
#include "AccountCls.h"
#include "ClientCls.h"
#include "BankCls.h"
using namespace std;

int main() {
    Bank bank;

	// Adding clients to the bank
    Client* client1 = new Client("Ahmed", "111");
    Client* client2 = new Client("Ali", "222");
    bank.AddClient(client1);
    bank.AddClient(client2);

	// Adding accounts to clients
    Account* acc1 = new Account(101, 500);
    Account* acc2 = new Account(102, 1000);
    Account* acc3 = new Account(201, 800);

    client1->AddAccount(acc1);
    client1->AddAccount(acc2);
    client2->AddAccount(acc3);

	// Performing some transactions
    acc1->Deposit(200);   // Ahmed Account 101
    acc2->Withdraw(300);  // Ahmed Account 102
    acc3->Deposit(100);   // Ali Account 201
    acc3->Withdraw(50);   // Ali Account 201

	// Showing all clients and their accounts
    bank.ShowAllClients();

    return 0;
}
