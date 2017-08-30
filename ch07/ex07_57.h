#ifndef CP5_ex07_57.h
#define CP5_ex07_57.h

#include <string>

class Account
{
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { inteestRate = new Rate;  }

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }

};

double Account::interestRate = inirRate();

#endif
