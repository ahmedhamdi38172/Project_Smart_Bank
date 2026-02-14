
#pragma once
#include <iostream>
#include <vector>
#include "ClientCls.h"
using namespace std;

class Bank {
private:
    vector<Client*> _Clients;

public:
    ~Bank() {
        for (auto client : _Clients) delete client;
    }

    void AddClient(Client* client) { _Clients.push_back(client); }

    Client* FindClient(const string& nationalid) {
        for (auto client : _Clients) {
            if (client->GetNationalID() == nationalid)
                return client;
        }
        return nullptr;
    }

    void ShowAllClients() const {
        cout << "=== All Clients ===\n";
        for (auto client : _Clients) {
            cout << "Name: " << client->GetName() << " | National ID: "
                << client->GetNationalID() << endl;
            client->ShowAllAccounts();
        }
    }
};


/*

   Bank bank;

    // إنشاء عملاء
    Client client1("Ahmed", "111");
    Client client2("Ali", "222");

    // إضافة العملاء للبنك
    bank.AddClient(&client1);
    bank.AddClient(&client2);

    // عرض كل العملاء
    cout << "=== All Clients ===" << endl;
    bank.ShowAllClients();

    // تجربة البحث
    cout << "\nSearching for client with ID 111..." << endl;

    Client* c = bank.FindClient("111");

    if (c != nullptr)
    {
        cout << "Client Found!" << endl;
        cout << "Name: " << c->GetName() << endl;
    }
    else
    {
        cout << "Client not found!" << endl;
    }

    return 0;



*/