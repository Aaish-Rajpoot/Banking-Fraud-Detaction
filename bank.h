#ifndef BANK_H
#define BANK_H
#include <vector>
#include <string>
using namespace std;

class Account {
public:
    string name;
    double balance;
    Account(string n, double b);
    void deposit(double amount);
    bool withdraw(double amount);
};

class Bank {
    vector<Account> accounts;
public:
    void createAccount(string name, double initial);
    void showAccounts();
};

#endif
#pragma once
