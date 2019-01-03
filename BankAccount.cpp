#include "BankAccount.h"
#include<string>
#include<math.h>
using namespace std;

BankAccount::BankAccount(string user)
{
  this -> user = user;
}

void deposit::BankAccount(float cash)
{
  cout << "Before balance: $" + balance;
  balance += cash;
  cout << "After balance: $" + balance;
}


void withdraw::BankAccount(float cash)
{
  cout << "Before balance: $" + balance;
  balance += cash;
  cout << "After balance: $" + balance;
}

void toString()
{
  cout << "Account balance for user " << user << " $" << balance;
}
