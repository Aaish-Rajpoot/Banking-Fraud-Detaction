#include "bank.h"
int main() {
    Bank b;
    b.createAccount("Aaish", 100000);
    b.createAccount("Ahmed", 50000);
    b.showAccounts();
    return 0;
}
