#include <iostream>
using namespace std;

class BankAccount {
    private:
    double balance;

    public:
    BankAccount(double initial = 0);
    double getBalance() const;
    BankAccount& operator+=(double amount);
    BankAccount& operator-=(double amount);

    BankAccount operator+(const BankAccount& other) const;
};

BankAccount::BankAccount(double initial) : balance(initial) {}

double BankAccount::getBalance() const {
    return balance;
}

BankAccount& BankAccount::operator+=(double amount) {
    if (amount > 0) {
        balance += amount;
    }
    return *this;
}

BankAccount& BankAccount::operator-=(double amount) {
    if (amount > 0 && (balance - amount) >= 0) {
        balance -= amount;
    }
    return *this;
}

BankAccount BankAccount::operator+(const BankAccount& other) const {
    return BankAccount(balance + other.balance);
}



int main() {
    BankAccount a(100);
    BankAccount b(50);

    a += 30;
    a -= 20;

    BankAccount c = a + b;

    cout << a.getBalance() << '\n';
    cout << b.getBalance() << '\n';
    cout << c.getBalance() << '\n';

    a -= 500;
    cout << a.getBalance() << '\n';

    return 0;
}