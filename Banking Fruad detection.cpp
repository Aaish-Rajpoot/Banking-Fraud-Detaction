#include "bank.h"
#include <iostream>
using namespace std;

Account::Account(string n, double b) : name(n), balance(b) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > balance) return false;
    balance -= amount;
    return true;
}

void Bank::createAccount(string name, double initial) {
    accounts.emplace_back(name, initial);
}

void Bank::showAccounts() {
    for (auto& acc : accounts) {
        cout << acc.name << ": RS:" << acc.balance << endl;
    }
}
