// Concept 15: Payment Processing System
// Aim: To implement a real-world polymorphic payment system.

#include <iostream>

using namespace std;

// Create abstract Payment class
class Payment
{
public:
    // Pure virtual payment function
    virtual void pay(double amount) const = 0;

    // Virtual destructor
    virtual ~Payment() = default;
};

// Create CardPayment class
class CardPayment : public Payment
{
public:
    // Implement payment using card
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount << " using card" << endl;
    }
};

// Create UpiPayment class
class UpiPayment : public Payment
{
public:
    // Implement payment using UPI
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount << " using UPI" << endl;
    }
};

// Create NetBankingPayment class
class NetBankingPayment : public Payment
{
public:
    // Implement payment using net banking
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount << " using net banking" << endl;
    }
};

// Create WalletPayment class
class WalletPayment : public Payment
{
public:
    // Implement payment using wallet
    void pay(double amount) const override
    {
        cout << "Paid Rs. " << amount << " using wallet" << endl;
    }
};

// Process payment using base reference
void processPayment(const Payment& payment, double amount)
{
    payment.pay(amount);
}

int main()
{
    // Create payment objects
    CardPayment card;
    UpiPayment upi;
    NetBankingPayment netBanking;
    WalletPayment wallet;

    // Process card payment
    processPayment(card, 1250.0);

    // Process UPI payment
    processPayment(upi, 750.0);

    // Process net banking payment
    processPayment(netBanking, 500.0);

    // Process wallet payment
    processPayment(wallet, 300.0);

    return 0;
}
