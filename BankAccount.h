#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string.h>
#include<math.h>

class BankAccount
{
  private:
    string user;
    float balance;
  public:
    BankAccount(string user);
    void deposit(float cash);
    void withdraw(float cash);
    void toString();
};
#endif
